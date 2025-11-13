#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("Concatenation: %s\n", strcat(str1, str2));

    strcpy(str1, "Hello");
    strcpy(str2, "World");
    printf("Copy Example: %s\n", strcpy(str1, str2));

    printf("Compare: %d\n", strcmp("apple", "banana"));

    return 0;
}

