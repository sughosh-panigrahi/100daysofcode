#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    // Ask user for the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse the matrix and calculate the sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j]; // Add each element to the sum variable
        }
    }

    // Output the final result
    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
