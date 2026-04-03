#include <stdio.h>

int main() {
    int m, n, i, j;
    int primarySum = 0;
    printf("Enter the number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the %dx%d matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int limit = (m < n) ? m : n;
    for (i = 0; i < limit; i++) {
        primarySum += matrix[i][i];
    }
    printf("\nSum of the Primary Diagonal elements: %d\n", primarySum);

    return 0;
}
