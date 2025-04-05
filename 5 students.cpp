#include <stdio.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    int age;
    int rollNo;
};

int main() {
    struct Student students[5];  // Array to hold 5 students

    // Input student details
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]%*c", students[i].name); // Read full name with spaces

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll Number: %d\n", students[i].rollNo);
    }

    return 0;
}

