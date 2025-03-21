#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Sum of squares of first %d natural numbers is: %d", n, sumOfSquares(n));
    return 0;
}

