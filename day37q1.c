#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    // 1. Initialize a 3x4 matrix
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // 2. Declare a 1D array to store the sum of each row
    int rowSums[ROWS] = {0}; 

    // 3. Nested loop to calculate the sum of each row
    for (int i = 0; i < ROWS; i++) {
        int currentSum = 0;
        for (int j = 0; j < COLS; j++) {
            currentSum += matrix[i][j];
        }
        // Store the calculated sum in the array
        rowSums[i] = currentSum;
    }

    // 4. Print the results from the array
    printf("The sums of the rows are:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
