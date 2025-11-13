#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Simple Interest\n2. Prime Number\n3. Armstrong Number\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float p, r, t, si;
            printf("Enter P, R, T: ");
            scanf("%f %f %f", &p, &r, &t);
            si = (p * r * t) / 100;
            printf("Simple Interest = %.2f\n", si);
            break;
        }
        case 2: {
            int n, i, flag = 0;
            printf("Enter number: ");
            scanf("%d", &n);
            for (i = 2; i <= n / 2; i++)
                if (n % i == 0) { flag = 1; break; }
            if (flag == 0 && n > 1) printf("Prime\n");
            else printf("Not Prime\n");
            break;
        }
        case 3: {
            int n, sum = 0, temp, r;
            printf("Enter number: ");
            scanf("%d", &n);
            temp = n;
            while (n > 0) {
                r = n % 10;
                sum += r*r*r;
                n /= 10;
            }
            if (sum == temp) printf("Armstrong\n");
            else printf("Not Armstrong\n");
            break;
        }
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
