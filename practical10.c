#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s1[20], s2[20];
    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);
    if (strlen(s1) > strlen(s2))
        printf("%s is longer\n", s1);
    else
        printf("%s is longer\n", s2);

    float r, *p;
    printf("\nEnter radius: ");
    scanf("%f", &r);
    p = &r;
    printf("Area = %.2f\n", 3.14 * (*p) * (*p));
    printf("Circumference = %.2f\n", 2 * 3.14 * (*p));

    return 0;
}

