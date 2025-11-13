#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;
    printf("Enter 1st distance (feet inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter 2nd distance (feet inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet++;
    }
    printf("Sum = %d'-%.1f\"\n", sum.feet, sum.inch);

    int n, i;
    float marks, total = 0;
    printf("\nEnter number of subjects: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter CGPA of subject %d: ", i + 1);
        scanf("%f", &marks);
        total += marks;
    }
    printf("Overall CGPA = %.2f\n", total / n);
    return 0;
}
