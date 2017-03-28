%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filename.c"
#include "chomp.c"
#include "err.c"
#include "label.c"
#include "token.c"
#include "convert.c"
extern FILE *yyin;
extern int line_number;
FILE *yyout;
int yylex();
int yyerror(char *s);
int yywrap();
%}
%start program
%union {
char *s;
}
%type <s> INTEGER DECIMAL LETTER
%type <s> expression term factor number var relop exprlist varlist statement
%token INTEGER LETTER DECIMAL
%token GOTO IF THEN LET PRINT END INPUT
%token NEWLINE ASSIGN COMMA
%token PLUS MINUS TIMES DIVIDED_BY LEFT_PAREN RIGHT_PAREN
%left ASSIGN COMMA
%left LT LE GT GE EQ NQ
%left PLUS MINUS
%left TIMES DIVIDED_BY
%%
program: block;
block: block line |
line;
line: INTEGER {
label *new_label = putlabel(atoi($1));
fprintf(yyout, "%s: ", new_label->name);
} statement endl |
statement endl;
statement: PRINT exprlist {
chomp($2);
token *root = tokenize($2, ",");
while (root) {
fprintf(yyout,
"std::cout << %s << std::endl;\n",
root->value);
root = root->next;
}
delete_tokens(root);
} |
IF expression relop expression {
size_t length = strlen($2);
size_t diff = strlen("THEN");
$2[length - 1 - diff] = '\0';
fprintf(yyout, "if (%s) {\n", $2);
} THEN statement {
fprintf(yyout, "}\n");
} |
GOTO expression {
chomp($2);
char *postfix = infix_to_postfix($2);
int result = eval(postfix);
label *new_label = getlabel(result);
if (!new_label) {
err("No matching label. Exiting...");
}
fprintf(yyout, "goto %s;\n", new_label->name);
} |
INPUT varlist {
chomp($2);
fprintf(yyout, "std::string %s;\n", $2);
token *root = tokenize($2, " ,");
fprintf(yyout, "std::cin");
while (root) {
fprintf(yyout, " >> %s", root->value);
root = root->next;
}
fprintf(yyout, ";\n");
delete_tokens(root);
} |
LET var ASSIGN expression {
chomp($4);
fprintf(yyout, "auto %c = %s;\n", $2[0], $4);
} |
END {
fprintf(yyout, "return 0;\n");
};
exprlist: exprlist COMMA expression { $$ = $1; } |
expression { $$ = $1; } ;
varlist: varlist COMMA var { $$ = $1; } |
var { $$ = $1; } ;
expression: expression PLUS term { $$ = $1; } |
expression MINUS term { $$ = $1; } |
term { $$ = $1; } ;
term: term TIMES factor { $$ = $1; } |
term DIVIDED_BY factor { $$ = $1; } |
factor { $$ = $1; } ;
factor: var { $$ = $1; } |
number { $$ = $1; } |
LEFT_PAREN expression RIGHT_PAREN { $$ = $2; } ;
number: INTEGER { $$ = $1; } |
DECIMAL { $$ = $1; } ;
var: LETTER { $$ = $1; } ;
relop: LT { $$ = "<"; } |
LE { $$ = "<="; } |
GT { $$ = ">"; } |
GE { $$ = ">="; } |
EQ { $$ = "=="; } |
NQ { $$ = "!="; } ;
endl: endl NEWLINE |
NEWLINE;
%%
int main(int argc, char **argv) {
if (argc != 2) {
printf("Usage: %s <filename>\n", argv[0]);
exit(EXIT_FAILURE);
}
char *input_file_name = argv[1];
char *output_file_name = convert_file_name(input_file_name);
FILE *input_file = fopen(input_file_name, "r");
if (!input_file) {
printf("%s can't be opened. Exiting...\n", input_file_name);
exit(EXIT_FAILURE);
}
FILE *output_file = fopen(output_file_name, "w");
if (!output_file) {
printf("%s can't be created. Exiting...\n", output_file_name);
exit(EXIT_FAILURE);
}
yyin = input_file;
yyout = output_file;
free(output_file_name);
fprintf(yyout, "#include <iostream>\n\nint main() {\n");
int result = yyparse();
fprintf(yyout, "return 0;\n}\n\n");
return result;
}
int yyerror(char *s) {
printf("[%d] %s\n", line_number, s);
return 1;
}
int yywrap() {
return 1;
}
