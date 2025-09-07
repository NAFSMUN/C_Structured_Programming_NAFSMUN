#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    // Initialize during declaration
    struct student s1 = {"NAFSMUN", 7, 2.66};

    // Display the student information
    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);
}
