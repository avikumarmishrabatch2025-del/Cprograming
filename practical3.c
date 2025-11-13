#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float a[50], sum = 0, mean, var = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &a[i]);
        sum += a[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++)
        var += (a[i] - mean) * (a[i] - mean);
    var = var / n;
    printf("Mean = %.2f, Variance = %.2f\n", mean, var);

    // Matrix for Transpose and Lower Triangle
    int r, c, mat[10][10];
    printf("\nEnter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("\nTranspose:\n");
    for (i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }

    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i >= j) printf("%d ", mat[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
