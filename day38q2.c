#include <stdio.h>

#define MAX 100

// Function to check if a square matrix is symmetric
int isSymmetric(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        // Only loop up to 'i' to check one half of the matrix against the other
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Return false immediately if a mismatch is found
            }
        }
    }
    return 1; // Return true if no mismatches are found
}

int main() {
    int rows, cols;
    int matrix[MAX][MAX];

    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) return 1;

    // A matrix can only be symmetric if it is square
    if (rows != cols) {
        printf("The matrix is not symmetric (It must be a square matrix).\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }

    if (isSymmetric(matrix, rows)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
