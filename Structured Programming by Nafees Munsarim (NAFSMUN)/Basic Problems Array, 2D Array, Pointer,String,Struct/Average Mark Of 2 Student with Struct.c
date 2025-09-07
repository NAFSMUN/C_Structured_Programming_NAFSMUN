// Student Structure in C: Input, display, and average marks calculation
#include <stdio.h>

// Define the structure "Student"
struct Student {
    char name[100];
    int age;
    float totalmarks;
};

int main() {
    // Declare variables to store information for two students
    struct Student s1, s2;

    // Input data for the first student
    printf("Input details for Student 1:\n");
    printf("Name: ");
    scanf("%s", &s1.name);  // Assuming names do not contain spaces
    printf("Age: ");
    scanf("%d", &s1.age);
    printf("Total Marks: ");
    scanf("%f", &s1.totalmarks);

    // Input data for the second student
    printf("\nInput details for Student 2:\n");
    printf("Name: ");
    scanf("%s", &s2.name);  // Assuming names do not contain spaces
    printf("Age: ");
    scanf("%d", &s2.age);
    printf("Total Marks: ");
    scanf("%f", &s2.totalmarks);

    // Display information for both students
    printf("\nStudent 1 Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Total Marks: %.2f\n", s1.totalmarks);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Total Marks: %.2f\n", s2.totalmarks);

    // Calculate and display the average total marks
    float averageMarks = (s1.totalmarks + s2.totalmarks) / 2;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);

    return 0;
}

