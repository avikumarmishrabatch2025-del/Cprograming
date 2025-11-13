#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic
    printf("\nArithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational
    printf("\nRelational Operators:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    // Logical
    printf("\nLogical Operators:\n");
    printf("(a > b) && (a != 0) = %d\n", (a > b) && (a != 0));
    printf("(a < b) || (b != 0) = %d\n", (a < b) || (b != 0));
    printf("!(a == b) = %d\n", !(a == b));

    // Conditional
    printf("\nConditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Greater number is %d\n", max);

    return 0;
}

