#include <stdio.h>

// Define a structure to hold distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistance(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches separately
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    // Convert inches to feet if 12 or more inches
    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }

    return result;
}

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance (feet and inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    // Input second distance
    printf("Enter second distance (feet and inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Add distances
    sum = addDistance(d1, d2);

    // Display the result
    printf("\nTotal Distance = %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}

