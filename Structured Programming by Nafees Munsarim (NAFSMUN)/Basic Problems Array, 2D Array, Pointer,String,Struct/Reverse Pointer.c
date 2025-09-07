#include <stdio.h>
#define MAX 100

// Function to print array
void printArr(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Print element using pointer
    }
    printf("\n");
}

int main() {
    int arr[MAX], size;
    int *left, *right, temp; // Pointers and temp variable

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input elements
    printf("Enter %d elements:\n", size);
    for (left = arr; left < arr + size; left++) {
        scanf("%d", left); // Store input at pointer location
    }

    // Print original array
    printf("\nArray before reverse:\n");
    printArr(arr, size);

    // Initialize pointers
    left = arr;            // Points to first element
    right = arr + size - 1; // Points to last element

    // Reverse the array
    while (left < right) {
        temp = *left;      // Swap values
        *left = *right;
        *right = temp;

        left++;  // Move left pointer forward
        right--; // Move right pointer backward
    }

    // Print reversed array
    printf("\nArray after reverse:\n");
    printArr(arr, size);

    return 0;
}

