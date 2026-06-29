#include "mystring.h"
#include <stdlib.h>

int Mstrlen(const char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int Mstrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

char* Mstrcat(char *dest, const char *src){
    char *ptr  = dest;
    while(*ptr != '\0'){
        ptr++;
    }
    while(*src != '\0'){
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

char* Msubstr(const char *src, int start, int length){
    char *sub = (char*)malloc(length +2);
    if(!sub) return  NULL;

    for (int i = 0; i < length;i++) {
        sub[i] = src[start +i ];
    }
    sub[length] = '\0';
    return sub;
}