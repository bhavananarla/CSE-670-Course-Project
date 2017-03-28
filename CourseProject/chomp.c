#include <string.h>
void chomp(char *str) {
size_t n = strlen(str);
if (str[n - 1] == '\n') {
str[n - 1] = '\0';
}
}
