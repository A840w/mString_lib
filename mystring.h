#ifndef MY_STRING_H
#define MY_STRING_H

int Mstrlen(const char *str);
int Mstrcmp(const char *s1, const char *s2); 
char* Mstrcat(char *dest, const char *src);
char* Msubstr(const char *src, int start, int length);

#endif