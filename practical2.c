#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("\n1. Conditional Check\n2. Switch Case (Day)\n3. Quadratic Equation\n4. Leap Year\n5. Digit Processing\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n;
                printf("Enter number: ");
                scanf("%d", &n);
                if (n > 0) printf("Positive\n");
                else if (n < 0) printf("Negative\n");
                else printf("Zero\n");
                break;
            }
            case 2: {
                int day;
                printf("Enter day (1–7): ");
                scanf("%d", &day);
                switch (day) {
                    case 1: printf("Sunday\n"); break;
                    case 2: printf("Monday\n"); break;
                    case 3: printf("Tuesday\n"); break;
                    case 4: printf("Wednesday\n"); break;
                    case 5: printf("Thursday\n"); break;
                    case 6: printf("Friday\n"); break;
                    case 7: printf("Saturday\n"); break;
                    default: printf("Invalid\n");
                }
                break;
            }
            case 3: {
                double a, b, c, d;
                printf("Enter a, b, c: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                d = b*b - 4*a*c;
                if (d > 0)
                    printf("Roots are real: %.2lf, %.2lf\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
                else if (d == 0)
                    printf("Roots are equal: %.2lf\n", -b/(2*a));
                else
                    printf("Complex roots\n");
                break;
            }
            case 4: {
                int year;
                printf("Enter year: ");
                scanf("%d", &year);
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                    printf("Leap Year\n");
                else
                    printf("Not a Leap Year\n");
                break;
            }
            case 5: {
                int n, sum = 0, rev = 0;
                printf("Enter number: ");
                scanf("%d", &n);
                int temp = n;
                while (n > 0) {
                    int r = n % 10;
                    sum += r;
                    rev = rev * 10 + r;
                    n /= 10;
                }
                printf("Sum = %d, Reverse = %d\n", sum, rev);
                break;
            }
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
