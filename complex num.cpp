#include <stdio.h>

// Define a structure for a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input first complex number
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Add the complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

