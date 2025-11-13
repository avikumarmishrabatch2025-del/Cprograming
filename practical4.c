#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    printf("Concatenation: %s\n", strcat(s1, s2));
    printf("Copied string: %s\n", strcpy(s2, s1));
    printf("Comparison result: %d\n", strcmp(s1, s2));

    return 0;
}

