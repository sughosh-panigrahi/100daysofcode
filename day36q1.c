#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get matrix dimensions from the user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix using Variable Length Array (VLA)
    int matrix[rows][cols];

    // 2. Read the elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the matrix in a grid format
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // \t inserts a tab space for neat alignment
        }
        printf("\n"); // Move to the next line after printing a full row
    }

    return 0;
}
