#ifndef MYSTRING_H
#define MYSTRING_H

#include <stddef.h>

void *mymemchr(const void *str, int c, size_t length);
int mymemcmp(const void *str1, const void *str2, size_t length);
void *mymemcpy(void *destination, const void *source, size_t length);
void *mymemmove(void *destination, const void *source, size_t length);
void *mymemset(void *str, int c, size_t length);
char *mystrcat(char *destination, const char *source);
char *mystrncat(char *destination, const char *source, size_t length);
char *mystrchr(const char *str, int c);
int mystrcmp(const char *str1, const char *str2);
int mystrncmp(const char *str1, const char *str2, size_t length);
int mystrcoll(const char *str1, const char *str2);
char *mystrcpy(char *destination, const char *source);
char *mystrncpy(char *destination, const char *source, size_t length);
int mystrcspn(const char *str1, const char *str2);
int mystrlen(const char *str);
char *mystrpbrk(const char *str1, const char *str2);
char *mystrrchr(const char *str, int c);
int mystrspn(const char *str1, const char *str2);
char *mystrstr(const char *haystack, const char *needle);
char *mystrtok(char *str, const char *delim);
size_t strxfrm(char *dest, const char *src, size_t n);

#endif // MYSTRING_H
