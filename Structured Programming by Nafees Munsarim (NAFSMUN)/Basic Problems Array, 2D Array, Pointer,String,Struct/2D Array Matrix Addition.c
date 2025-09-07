#include <stdio.h>

int main() {
    int arr1[50][50], brr1[50][50], crr1[50][50]; // Three matrices
    int i, j, n;

    // Ask user for size of matrix
    printf("Enter size of square matrix (max 5): ");
    scanf("%d", &n);

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < n; i++) {          // Loop through rows
        for (j = 0; j < n; j++) {      // Loop through columns
            scanf("%d", &arr1[i][j]);  // Read element
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &brr1[i][j]);
        }
    }

    // Add both matrices element by element
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            crr1[i][j] = arr1[i][j] + brr1[i][j];
        }
    }

    // Print first matrix
    printf("\nFirst Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
    }

    // Print second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
        printf("\n");
    }

    // Print result matrix (sum)
    printf("\nSum of two Matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
        printf("\n");
    }
}

