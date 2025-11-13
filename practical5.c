#include <stdio.h>

int str_len(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void str_cat(char s1[], char s2[]) {
    int i = 0, j = 0;
    while (s1[i] != '\0') i++;
    while (s2[j] != '\0') s1[i++] = s2[j++];
    s1[i] = '\0';
}

int str_cmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') return 0;
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char a[50], b[50];
    printf("Enter two strings: ");
    gets(a);
    gets(b);
    printf("Length of first: %d\n", str_len(a));
    str_cat(a, b);
    printf("Concatenated: %s\n", a);
    printf("Comparison result: %d\n", str_cmp(a, b));
    return 0;
}
