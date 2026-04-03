#include <stdio.h>

int main() {
    int rows, cols, i, j, target, count = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the element to find frequency of: ");
    scanf("%d", &target);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }

    printf("Frequency of %d is: %d\n", target, count);

    return 0;
}
