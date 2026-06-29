#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int main() {
    char str1[50] = "heello";
    char str2[] = "sahil";
    printf("the length of the str1 is: %d\n", Mstrlen(str1));
    printf("compare str1 & and str2: %d\n", Mstrcmp(str1, str2));
    Mstrcat(str1,str2);
    printf("after strcat: %s\n", str1);

    char *sub = Msubstr(str1, 1,2);
    printf("substraction of str1: %s\n", sub);
    free(sub);

    return 0;
}