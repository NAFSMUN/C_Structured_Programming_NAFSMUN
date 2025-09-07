#include <stdio.h>

int main() {
    // Declare matrices and variables
    int arr1[50][50], brr1[50][50], crr1[50][50];
    int i, j, k, r1, c1, r2, c2, sum;

    // Ask for rows and columns of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Ask for rows and columns of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Columns of first matrix must equal rows of second.\n");
        return 0; // Stop program
    }

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &brr1[i][j]);
        }
    }

    // Multiply the matrices
    for (i = 0; i < r1; i++) {          // Loop over rows of first matrix
        for (j = 0; j < c2; j++) {      // Loop over columns of second matrix
            sum = 0;                    // Reset sum for each element
            for (k = 0; k < c1; k++) {  // Loop for multiplication
                sum += arr1[i][k] * brr1[k][j];
            }
            crr1[i][j] = sum;           // Store result in product matrix
        }
    }

    // Display the result matrix
    printf("\nResult of multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", crr1[i][j]);
        }
        printf("\n"); // New line after each row
    }
}

