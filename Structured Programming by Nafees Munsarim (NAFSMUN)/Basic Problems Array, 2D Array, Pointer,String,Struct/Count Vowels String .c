#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100   // Maximum string size

int main() {
    char str[MAX_SIZE];
    int i, vowel = 0, consonant = 0;  // counters

    // Input string from user
    printf("Enter any string: ");
    gets(str);   //

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is alphabet (a-z or A-Z)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {

            // Check if it's a vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowel++;
            }
            else {
                consonant++;  // If not vowel, then consonant
            }
        }
    }

    // Print results
    printf("Total vowels     = %d\n", vowel);
    printf("Total consonants = %d\n", consonant);

    return 0;
}

