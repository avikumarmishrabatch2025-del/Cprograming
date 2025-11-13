#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("\n1. Positive/Negative Check\n2. Day of Week\n3. Quadratic Equation\n4. Leap Year\n5. Sum & Reverse of Digits\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int n;
            printf("Enter number: ");
            scanf("%d", &n);
            if (n > 0) printf("Positive\n");
            else if (n < 0) printf("Negative\n");
            else printf("Zero\n");
        }

        else if (choice == 2) {
            int day;
            printf("Enter day number (1-7): ");
            scanf("%d", &day);
            switch (day) {
                case 1: printf("Sunday\n"); break;
                case 2: printf("Monday\n"); break;
                case 3: printf("Tuesday\n"); break;
                case 4: printf("Wednesday\n"); break;
                case 5: printf("Thursday\n"); break;
                case 6: printf("Friday\n"); break;
                case 7: printf("Saturday\n"); break;
                default: printf("Invalid day\n");
            }
        }

        else if (choice == 3) {
            float a, b, c, d, r1, r2;
            printf("Enter a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);
            d = b*b - 4*a*c;
            if (d > 0) {
                r1 = (-b + sqrt(d)) / (2*a);
                r2 = (-b - sqrt(d)) / (2*a);
                printf("Roots are %.2f and %.2f\n", r1, r2);
            } else if (d == 0) {
                r1 = -b / (2*a);
                printf("Both roots are %.2f\n", r1);
            } else {
                printf("Imaginary roots\n");
            }
        }

        else if (choice == 4) {
            int y;
            printf("Enter year: ");
            scanf("%d", &y);
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                printf("Leap Year\n");
            else
                printf("Not Leap Year\n");
        }

        else if (choice == 5) {
            int n, sum = 0, rev = 0, rem;
            printf("Enter number: ");
            scanf("%d", &n);
            int temp = n;
            while (n > 0) {
                rem = n % 10;
                sum += rem;
                rev = rev * 10 + rem;
                n /= 10;
            }
            printf("Sum = %d, Reverse = %d\n", sum, rev);
        }

        else if (choice == 6)
            printf("Exit Program\n");

        else
            printf("Invalid Choice\n");

    } while (choice != 6);

    return 0;
}

