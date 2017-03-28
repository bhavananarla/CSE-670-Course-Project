#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "project.y"
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
#line 19 "project.y"
typedef union {
char *s;
} YYSTYPE;
#line 43 "y.tab.c"
#define INTEGER 257
#define DECIMAL 258
#define LETTER 259
#define GOTO 260
#define IF 261
#define THEN 262
#define LET 263
#define PRINT 264
#define END 265
#define INPUT 266
#define NEWLINE 267
#define ASSIGN 268
#define COMMA 269
#define PLUS 270
#define MINUS 271
#define TIMES 272
#define DIVIDED_BY 273
#define LEFT_PAREN 274
#define RIGHT_PAREN 275
#define LT 276
#define LE 277
#define GT 278
#define GE 279
#define EQ 280
#define NQ 281
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,   10,   10,   12,   11,   11,    9,   14,    9,    9,
    9,    9,    9,    7,    7,    8,    8,    1,    1,    1,
    2,    2,    2,    3,    3,    3,    4,    4,    5,    6,
    6,    6,    6,    6,    6,   13,   13,
};
short yylen[] = {                                         2,
    1,    2,    1,    0,    4,    2,    2,    0,    7,    2,
    2,    4,    1,    3,    1,    3,    1,    3,    3,    1,
    3,    3,    1,    1,    1,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    4,    0,    0,    0,    0,   13,    0,    0,    0,    0,
    3,    0,   27,   28,   29,    0,    0,    0,   23,   25,
   24,    0,    0,    0,    0,   17,    0,   37,    0,    2,
    0,    0,    0,    0,    0,    0,   30,   31,   32,   33,
   34,   35,    0,    0,    0,    0,   36,    0,   26,    0,
    0,   21,   22,    0,    0,    0,   16,    0,    0,    9,
};
short yydgoto[] = {                                       8,
   17,   18,   19,   20,   21,   43,   25,   27,    9,   10,
   11,   12,   29,   58,
};
short yysindex[] = {                                   -172,
    0, -228, -228, -234, -228,    0, -234,    0, -264, -172,
    0, -165,    0,    0,    0, -228, -263, -256,    0,    0,
    0, -244, -240, -263, -230,    0, -212,    0, -226,    0,
 -264, -204, -228, -228, -228, -228,    0,    0,    0,    0,
    0,    0, -228, -228, -228, -234,    0, -226,    0, -256,
 -256,    0,    0, -263, -263, -263,    0, -187, -165,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   76,
    0,    0,    0,    0,    0,    0, -190, -257,    0,    0,
    0,    0,    0, -229, -181,    0, -180,    0,    1,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   11,    0, -217,
 -197,    0,    0, -160, -177, -218,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -1,   22,   33,    0,    2,    0,    0,    0,  -12,    0,
   87,    0,   72,    0,
};
#define YYTABLESIZE 277
short yytable[] = {                                      31,
    6,   22,   28,   24,   20,   23,   33,   34,   26,   20,
    5,   20,   20,   20,   32,   35,   36,   20,   20,   20,
   20,   20,   20,   20,   15,   33,   34,   44,   13,   14,
   15,   37,   38,   39,   40,   41,   42,   15,   45,   15,
   47,   54,   55,   56,   18,   16,   60,   57,   14,   18,
   14,   18,   18,   18,   50,   51,   46,   18,   18,   18,
   18,   18,   18,   18,   19,   33,   34,   52,   53,   19,
   49,   19,   19,   19,   59,    1,   10,   19,   19,   19,
   19,   19,   19,   19,    1,    7,   11,    2,    3,   12,
    4,    5,    6,    7,    2,    3,   30,    4,    5,    6,
    7,    8,   48,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    6,    0,    0,
    6,    6,    0,    6,    6,    6,    6,    5,    0,    0,
    5,    5,    0,    5,    5,    5,    5,
};
short yycheck[] = {                                      12,
    0,    3,  267,    5,  262,    4,  270,  271,    7,  267,
    0,  269,  270,  271,   16,  272,  273,  275,  276,  277,
  278,  279,  280,  281,  259,  270,  271,  268,  257,  258,
  259,  276,  277,  278,  279,  280,  281,  267,  269,  269,
  267,   43,   44,   45,  262,  274,   59,   46,  267,  267,
  269,  269,  270,  271,   33,   34,  269,  275,  276,  277,
  278,  279,  280,  281,  262,  270,  271,   35,   36,  267,
  275,  269,  270,  271,  262,    0,  267,  275,  276,  277,
  278,  279,  280,  281,  257,  267,  267,  260,  261,  267,
  263,  264,  265,  266,  260,  261,   10,  263,  264,  265,
  266,  262,   31,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,
  260,  261,   -1,  263,  264,  265,  266,  257,   -1,   -1,
  260,  261,   -1,  263,  264,  265,  266,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 281
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INTEGER","DECIMAL","LETTER",
"GOTO","IF","THEN","LET","PRINT","END","INPUT","NEWLINE","ASSIGN","COMMA",
"PLUS","MINUS","TIMES","DIVIDED_BY","LEFT_PAREN","RIGHT_PAREN","LT","LE","GT",
"GE","EQ","NQ",
};
char *yyrule[] = {
"$accept : program",
"program : block",
"block : block line",
"block : line",
"$$1 :",
"line : INTEGER $$1 statement endl",
"line : statement endl",
"statement : PRINT exprlist",
"$$2 :",
"statement : IF expression relop expression $$2 THEN statement",
"statement : GOTO expression",
"statement : INPUT varlist",
"statement : LET var ASSIGN expression",
"statement : END",
"exprlist : exprlist COMMA expression",
"exprlist : expression",
"varlist : varlist COMMA var",
"varlist : var",
"expression : expression PLUS term",
"expression : expression MINUS term",
"expression : term",
"term : term TIMES factor",
"term : term DIVIDED_BY factor",
"term : factor",
"factor : var",
"factor : number",
"factor : LEFT_PAREN expression RIGHT_PAREN",
"number : INTEGER",
"number : DECIMAL",
"var : LETTER",
"relop : LT",
"relop : LE",
"relop : GT",
"relop : GE",
"relop : EQ",
"relop : NQ",
"endl : endl NEWLINE",
"endl : NEWLINE",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 114 "project.y"
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
#line 300 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 4:
#line 36 "project.y"
{
label *new_label = putlabel(atoi(yyvsp[0].s));
fprintf(yyout, "%s: ", new_label->name);
}
break;
case 7:
#line 41 "project.y"
{
chomp(yyvsp[0].s);
token *root = tokenize(yyvsp[0].s, ",");
while (root) {
fprintf(yyout,
"std::cout << %s << std::endl;\n",
root->value);
root = root->next;
}
delete_tokens(root);
}
break;
case 8:
#line 52 "project.y"
{
size_t length = strlen(yyvsp[-2].s);
size_t diff = strlen("THEN");
yyvsp[-2].s[length - 1 - diff] = '\0';
fprintf(yyout, "if (%s) {\n", yyvsp[-2].s);
}
break;
case 9:
#line 57 "project.y"
{
fprintf(yyout, "}\n");
}
break;
case 10:
#line 60 "project.y"
{
chomp(yyvsp[0].s);
char *postfix = infix_to_postfix(yyvsp[0].s);
int result = eval(postfix);
label *new_label = getlabel(result);
if (!new_label) {
err("No matching label. Exiting...");
}
fprintf(yyout, "goto %s;\n", new_label->name);
}
break;
case 11:
#line 70 "project.y"
{
chomp(yyvsp[0].s);
fprintf(yyout, "std::string %s;\n", yyvsp[0].s);
token *root = tokenize(yyvsp[0].s, " ,");
fprintf(yyout, "std::cin");
while (root) {
fprintf(yyout, " >> %s", root->value);
root = root->next;
}
fprintf(yyout, ";\n");
delete_tokens(root);
}
break;
case 12:
#line 82 "project.y"
{
chomp(yyvsp[0].s);
fprintf(yyout, "auto %c = %s;\n", yyvsp[-2].s[0], yyvsp[0].s);
}
break;
case 13:
#line 86 "project.y"
{
fprintf(yyout, "return 0;\n");
}
break;
case 14:
#line 89 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 15:
#line 90 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 16:
#line 91 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 17:
#line 92 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 18:
#line 93 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 19:
#line 94 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 20:
#line 95 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 21:
#line 96 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 22:
#line 97 "project.y"
{ yyval.s = yyvsp[-2].s; }
break;
case 23:
#line 98 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 24:
#line 99 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 25:
#line 100 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 26:
#line 101 "project.y"
{ yyval.s = yyvsp[-1].s; }
break;
case 27:
#line 102 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 28:
#line 103 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 29:
#line 104 "project.y"
{ yyval.s = yyvsp[0].s; }
break;
case 30:
#line 105 "project.y"
{ yyval.s = "<"; }
break;
case 31:
#line 106 "project.y"
{ yyval.s = "<="; }
break;
case 32:
#line 107 "project.y"
{ yyval.s = ">"; }
break;
case 33:
#line 108 "project.y"
{ yyval.s = ">="; }
break;
case 34:
#line 109 "project.y"
{ yyval.s = "=="; }
break;
case 35:
#line 110 "project.y"
{ yyval.s = "!="; }
break;
#line 646 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
