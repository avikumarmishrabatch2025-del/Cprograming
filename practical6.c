#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    printf("1. Simple Interest\n2. Prime\n3. Armstrong\nEnter choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        float p, r, t;
        printf("Enter P, R, T: ");
        scanf("%f %f %f", &p, &r, &t);
        printf("Simple Interest = %.2f\n", (p * r * t) / 100);
    }

    else if (ch == 2) {
        int n, i, f = 0;
        printf("Enter number: ");
        scanf("%d", &n);
        for (i = 2; i < n; i++)
            if (n % i == 0) f = 1;
        if (f == 0 && n > 1) printf("Prime\n");
        else printf("Not Prime\n");
    }

    else if (ch == 3) {
        int n, temp, r, sum = 0;
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
    }

    return 0;
}
