#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;
    int x = 1, y = 0;

    // ----- Arithmetic Operators -----
    printf("=== Arithmetic Operators ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% prints '%'

    // ----- Relational Operators -----
    printf("\n=== Relational Operators ===\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // ----- Logical Operators -----
    printf("\n=== Logical Operators ===\n");
    printf("x && y = %d\n", x && y);  // Logical AND
    printf("x || y = %d\n", x || y);  // Logical OR
    printf("!x = %d\n", !x);          // Logical NOT

    // ----- Conditional (Ternary) Operator -----
    printf("\n=== Conditional (Ternary) Operator ===\n");
    result = (a > b) ? a : b;
    printf("Greater number between a and b is: %d\n", result);

    return 0;
}
