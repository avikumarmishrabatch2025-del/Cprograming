#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n, pos = 0, neg = 0;
    float mean, var = 0, dev;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    float a[n];
    for (i = 0; i < n; i++) scanf("%f", &a[i]);

    float sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] >= 0) pos += a[i];
        else neg += a[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) var += pow(a[i] - mean, 2);
    var /= n;
    dev = sqrt(var);

    printf("Mean = %.2f\nVariance = %.2f\nStandard Deviation = %.2f\n", mean, var, dev);
    printf("Sum of Positives = %d\nSum of Negatives = %d\n", pos, neg);

    int r, c;
    printf("\nEnter rows and cols for matrix: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("\nTranspose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }

    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i >= j) printf("%d ", mat[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
