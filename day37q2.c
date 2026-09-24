#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get matrix dimensions from the user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Declare the original matrix and the transpose matrix with swapped dimensions
    int matrix[rows][cols];
    int transpose[cols][rows];

    // 2. Input elements of the original matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Compute the transpose by swapping row and column indices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 4. Display the transposed matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n"); // Move to the next line after printing a full row
    }

    return 0;
}
