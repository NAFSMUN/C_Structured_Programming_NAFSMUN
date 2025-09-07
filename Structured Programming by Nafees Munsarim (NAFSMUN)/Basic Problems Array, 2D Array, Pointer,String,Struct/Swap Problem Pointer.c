#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;   // Store value of a in temp
    *a = *b;     // Put value of b into a
    *b = temp;   // Put temp (old a) into b

    // Show values inside swap function
    printf("\nInside swap function:\n");
    printf("num1 = %d\n", *a);
    printf("num2 = %d\n\n", *b);
}

int main() {
    int num1, num2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Show original values
    printf("\nBefore swapping in main:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n\n", num2);

    // Call swap function (pass addresses)
    swap(&num1, &num2);

    // Show swapped values in main
    printf("After swapping in main:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}

