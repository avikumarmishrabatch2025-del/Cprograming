#include <stdio.h>
#include <string.h>
#include <math.h>

void sortStrings(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strlen(arr[i]) > strlen(arr[j])) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char arr[n][50];
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }
    sortStrings(arr, n);
    printf("\nStrings sorted by length:\n");
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);

    float r, *p = &r;
    printf("\nEnter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", M_PI * (*p) * (*p));
    printf("Circumference = %.2f\n", 2 * M_PI * (*p));
    return 0;
}
