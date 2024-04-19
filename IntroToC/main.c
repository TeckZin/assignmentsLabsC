#include <stdio.h>

int main() {
    // data types
    char str[] = "Hello";
    printf("%s\n", str);
    char *pStr = &str;
    *pStr = 'H';

    printf("%c\n", *pStr);
    printf("%p\n", pStr);


    return 0;
}
