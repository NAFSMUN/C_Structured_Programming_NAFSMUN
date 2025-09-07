#include <stdio.h>
void basic_arithmetic();
void factorial_calc();
void percentage_calc();
void min_max_avg_calc();
void matrix_addition();
void matrix_multiplication();
void matrix_transpose();

int factorial(int n);

int main() {
    int choice;

    do {
        printf("\n==== CALCULATOR MENU ====\n");
        printf("1. Basic Arithmetic (+, -, *, /)\n");
        printf("2. Factorial\n");
        printf("3. Percentage\n");
        printf("4. Min, Max, Average\n");
        printf("5. Matrix Addition\n");
        printf("6. Matrix Multiplication\n");
        printf("7. Matrix Transpose\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) basic_arithmetic();
        else if (choice == 2) factorial_calc();
        else if (choice == 3) percentage_calc();
        else if (choice == 4) min_max_avg_calc();
        else if (choice == 5) matrix_addition();
        else if (choice == 6) matrix_multiplication();
        else if (choice == 7) matrix_transpose();
        else if (choice == 0) printf("Goodbye!\n");
        else printf("Invalid choice. Try again.\n");

    } while (choice != 0);

    return 0;
}

// 1. Basic Arithmetic
void basic_arithmetic() {
    double a, b;
    char op;
    printf("Enter: number operator number (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') printf("Result = %.2lf\n", a + b);
    else if (op == '-') printf("Result = %.2lf\n", a - b);
    else if (op == '*') printf("Result = %.2lf\n", a * b);
    else if (op == '/') {
        if (b == 0) printf("Error: Division by zero!\n");
        else printf("Result = %.2lf\n", a / b);
    } else {
        printf("Invalid operator!\n");
    }
}

// 2. Factorial
void factorial_calc() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Negative factorial not possible.\n");
        return;
    }
    printf("Factorial of %d = %d\n", n, factorial(n));
}

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

// 3. Percentage
void percentage_calc() {
    double marks, total;
    printf("Enter obtained marks: ");
    scanf("%lf", &marks);
    printf("Enter total marks: ");
    scanf("%lf", &total);

    if (total <= 0) {
        printf("Error: Total marks must be > 0\n");
        return;
    }
    printf("Percentage = %.2lf%%\n", (marks / total) * 100);
}

// 4. Min, Max, Average
void min_max_avg_calc() {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Must be positive count.\n");
        return;
    }

    double num, sum = 0, min, max;
    printf("Enter number 1: ");
    scanf("%lf", &num);
    min = max = num;
    sum = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("Min = %.2lf, Max = %.2lf, Average = %.2lf\n", min, max, sum / n);
}

// 5. Matrix Addition
void matrix_addition() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    double A[r][c], B[r][c], S[r][c];
    printf("Enter Matrix A:\n");
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            scanf("%lf", &A[i][j]);

    printf("Enter Matrix B:\n");
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            scanf("%lf", &B[i][j]);

    printf("Sum:\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            S[i][j] = A[i][j] + B[i][j];
            printf("%.2lf ", S[i][j]);
        }
        printf("\n");
    }
}

// 6. Matrix Multiplication
void matrix_multiplication() {
    int r1, c1, r2, c2;
    printf("Enter rows and cols of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols of B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Columns of A must match rows of B.\n");
        return;
    }

    double A[r1][c1], B[r2][c2], P[r1][c2];
    printf("Enter Matrix A:\n");
    for (int i=0; i<r1; i++)
        for (int j=0; j<c1; j++)
            scanf("%lf", &A[i][j]);

    printf("Enter Matrix B:\n");
    for (int i=0; i<r2; i++)
        for (int j=0; j<c2; j++)
            scanf("%lf", &B[i][j]);

    // Initialize and multiply
    for (int i=0; i<r1; i++)
        for (int j=0; j<c2; j++) {
            P[i][j] = 0;
            for (int k=0; k<c1; k++)
                P[i][j] += A[i][k] * B[k][j];
        }

    printf("Product:\n");
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++)
            printf("%.2lf ", P[i][j]);
        printf("\n");
    }
}

// 7. Matrix Transpose
void matrix_transpose() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    double A[r][c];
    printf("Enter Matrix:\n");
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            scanf("%lf", &A[i][j]);

    printf("Transpose:\n");
    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++)
            printf("%.2lf ", A[j][i]);
        printf("\n");
    }
}
