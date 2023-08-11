#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"

void *mymemchr(const void *str, int c, size_t length) {
    if (str == NULL) {
        return NULL;
    } else {
        const unsigned char *tempptr = (const unsigned char *)str;
        while (length--) {
            if (*tempptr == (unsigned char)c) {
                return (void *)tempptr;
            }
            tempptr++;
        }
        return NULL;
    }
}

signed int mymemcmp(const void *str1, const void *str2, size_t length) {
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        const unsigned char *tempptr1 = (const unsigned char *)str1;
        const unsigned char *tempptr2 = (const unsigned char *)str2;
        while (length--) {
            if (*tempptr1 != *tempptr2) {
                return (*tempptr1 > *tempptr2) ? 1 : -1;
            }
            tempptr1++;
            tempptr2++;
        }
        return 0;
    }
}

void *mymemcpy(void *destination, const void *source, size_t length) {
    if (source == NULL) {
        return NULL;
    } else {
        const char *tempptr1 = source;
        char *tempptr2 = destination;
        while (length--) {
            *tempptr2++ = *tempptr1++;
        }
    }
    return destination;
}

void *mymemmove(void *destination, const void *source, size_t length) {
    unsigned char *dest = (unsigned char *)destination;
    const unsigned char *src = (const unsigned char *)source;
    if (destination == NULL || source == NULL) {
        return NULL;
    } else {
        if (dest < src) {
            for (size_t i = 0; i < length; i++) {
                dest[i] = src[i];
            }
        } else if (dest > src) {
            for (size_t i = length; i > 0; i--) {
                dest[i - 1] = src[i - 1];
            }
        }
    }
    return destination;
}

void *mymemset(void *str, int c, size_t length) {
    char *tempptr = str;
    if (str == NULL) {
        return NULL;
    } else {
        while (length--) {
            *tempptr++ = c;
        }
    }
    return str;
}

char *mystrcat(char *destination, const char *source) {
    if (destination == NULL || source == NULL) {
        return NULL;
    } else {
        char *tempdest = destination;
        const char *tempsrc = source;
        while (*tempdest != '\0') {
            tempdest++;
        }
        while (*tempsrc != '\0') {
            *tempdest++ = *tempsrc++;
        }
        *tempdest = '\0';
    }
    return destination;
}

char *mystrncat(char *destination, const char *source, size_t length) {
    if (destination == NULL || source == NULL) {
        return NULL;
    } else {
        char *tempdest = destination;
        const char *tempsrc = source;
        while (*tempdest != '\0') {
            tempdest++;
        }
        while (*tempsrc != '\0' && length-- > 0) {
            *tempdest++ = *tempsrc++;
        }
        *tempdest = '\0';
    }
    return destination;
}

char *mystrchr(const char *str, int c) {
    if (str == NULL) {
        return NULL;
    } else {
        char *tempstr = (char *)str;
        while (*tempstr != '\0') {
            if (*tempstr == c) {
                return tempstr;
            }
            tempstr++;
        }
        return NULL;
    }
}

int mystrcmp(const char *str1, const char *str2) {
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        const unsigned char *tempptr1 = (const unsigned char *)str1;
        const unsigned char *tempptr2 = (const unsigned char *)str2;
        while (*tempptr1 != '\0' && *tempptr2 != '\0') {
            if (*tempptr1 != *tempptr2) {
                return (*tempptr1 > *tempptr2) ? 1 : -1;
            }
            tempptr1++;
            tempptr2++;
        }
        if (*tempptr1 == *tempptr2) {
            return 0;
        } else {
            return (*tempptr1 > *tempptr2) ? 1 : -1;
        }
    }
}

int mystrncmp(const char *str1, const char *str2, size_t length) {
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        const unsigned char *tempptr1 = (const unsigned char *)str1;
        const unsigned char *tempptr2 = (const unsigned char *)str2;
        while (*tempptr1 != '\0' && *tempptr2 != '\0' && length--) {
            if (*tempptr1 != *tempptr2) {
                return (*tempptr1 > *tempptr2) ? 1 : -1;
            }
            tempptr1++;
            tempptr2++;
        }
        return 0;
    }
}

int mystrcoll(const char *str1, const char *str2) {
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        while (*str1 != '\0' && *str2 != '\0') {
            if (*str1 != *str2) {
                return (*str1 > *str2) ? 1 : -1;
            }
            str1++;
            str2++;
        }
        if (*str1 == *str2) {
            return 0;
        } else {
            return (*str1 > *str2) ? 1 : -1;
        }
    }
}

char *mystrcpy(char *destination, const char *source) {
    if (destination == NULL || source == NULL) {
        return NULL;
    } else {
        char *tempdest = destination;
        const char *tempsrc = source;
        while (*tempsrc != '\0') {
            *tempdest++ = *tempsrc++;
        }
        *tempdest = '\0';
    }
    return destination;
}

char *mystrncpy(char *destination, const char *source, size_t length) {
    if (destination == NULL || source == NULL) {
        return NULL;
    } else {
        char *tempdest = destination;
        const char *tempsrc = source;
        while (*tempsrc != '\0' && length--) {
            *tempdest++ = *tempsrc++;
        }
    }
    return destination;
}

int mystrcspn(const char *str1, const char *str2) {
    int returnvalue = 0;
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        const char *tempptr1 = str1;
        const char *tempptr2;
        while (*tempptr1 != '\0') {
            tempptr2 = str2;
            while (*tempptr2 != '\0') {
                if (*tempptr1 == *tempptr2) {
                    return returnvalue;
                }
                tempptr2++;
            }
            tempptr1++;
            returnvalue++;
        }
    }
    return returnvalue;
}

int mystrlen(const char *str) {
    int returnvalue = 0;
    if (str == NULL) {
        return -1;
    } else {
        while (*str != '\0') {
            returnvalue++;
            str++;
        }
        return returnvalue;
    }
}

char *mystrpbrk(const char *str1, const char *str2) {
    if (str1 == NULL || str2 == NULL) {
        return NULL;
    }
    const char *tempptr1 = str1;
    const char *tempptr2;
    while (*tempptr1 != '\0') {
        tempptr2 = str2;
        while (*tempptr2 != '\0') {
            if (*tempptr1 == *tempptr2) {
                return (char *)tempptr1;
            }
            tempptr2++;
        }
        tempptr1++;
    }
    return NULL;
}

char *mystrrchr(const char *str, int c) {
    char *returnptr = NULL;
    if (str == NULL) {
        return NULL;
    } else {
        while (*str != '\0') {
            if (*str == c) {
                returnptr = (char *)str;
            }
            str++;
        }
    }
    return returnptr;
}

int mystrspn(const char *str1, const char *str2) {
    int returnvalue = 0;
    if (str1 == NULL || str2 == NULL) {
        return 0;
    } else {
        const char *tempptr1 = str1;
        const char *tempptr2 = str2;
        while (*tempptr1 != '\0' && *tempptr2 != '\0' && *tempptr1 == *tempptr2) {
            returnvalue++;
            tempptr1++;
            tempptr2++;
        }
    }
    return returnvalue;
}

char *mystrstr(const char *haystack, const char *needle) {
    if (haystack == NULL || needle == NULL) {
        return NULL;
    }
    const char *tempptr1 = haystack;
    const char *tempptr2 = needle;
    while (*tempptr1 != '\0') {
        const char *temp = tempptr1;
        while (*tempptr2 == *tempptr1 && *tempptr2 != '\0') {
            tempptr1++;
            tempptr2++;
        }
        if (*tempptr2 == '\0') {
            return (char *)temp;
        }
        tempptr1 = temp + 1;
        tempptr2 = needle;
    }
    return NULL;
}

char *mystrtok(char *str, const char *delim) {
    static char *lastToken = NULL;
    char *result = NULL;

    if (delim == NULL) {
        return NULL;
    }

    if (str == NULL) {
        str = lastToken;
    }

    while (*str != '\0' && strchr(delim, *str) != NULL) {
        str++;
    }

    if (*str != '\0') {
        result = str;
        while (*str != '\0' && strchr(delim, *str) == NULL) {
            str++;
        }
        if (*str != '\0') {
            *str = '\0';
            lastToken = str + 1;
        } else {
            lastToken = NULL;
        }
    }

    return result;
}

size_t strxfrm(char *dest, const char *src, size_t n) {
    size_t srcLen = strlen(src);
    if (n <= srcLen + 1) {
        return srcLen;
    }
    strncpy(dest, src, srcLen);
    dest[srcLen] = '\0';
    return srcLen;
}
