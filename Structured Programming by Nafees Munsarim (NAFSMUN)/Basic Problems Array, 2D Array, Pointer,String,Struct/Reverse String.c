#include <stdio.h>
#define MAX_SIZE 100   // Maximum string size

int main() {
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int i, j, len;

    // Input string
    printf("Enter any string: ");
    gets(str);  // (unsafe, but okay for exam practice)

    // Find length of string
    for (len = 0; str[len] != '\0'; len++);

    // Copy characters in reverse order
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = str[i];
    }
    reverse[j] = '\0';   // End the reverse string

    // Print results
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string  = %s\n", reverse);

    return 0;
}
