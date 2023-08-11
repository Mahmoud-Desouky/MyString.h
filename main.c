#include <stdio.h>
#include "mystring.h"

int main() {
    // Test mymemchr
    char testString[] = "Hello, World!";
    char *result = mymemchr(testString, 'W', sizeof(testString));
    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    // Test mymemcmp
    int cmpResult = mymemcmp("abc", "abd", 3);
    printf("memcmp result: %d\n", cmpResult);

    // Test mymemcpy
    char source[] = "Copy this";
    char destination[20];
    mymemcpy(destination, source, sizeof(source));
    printf("Copied string: %s\n", destination);

    // ... and so on for the rest of the functions

    return 0;
}
