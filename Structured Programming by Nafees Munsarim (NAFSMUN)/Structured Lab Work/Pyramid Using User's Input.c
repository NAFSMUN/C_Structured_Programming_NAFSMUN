#include <stdio.h>

int main() {
    int rows;
    printf("Enter Height Of The Pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}
