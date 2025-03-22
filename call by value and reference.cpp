#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After Swap by Value: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swap by Reference: a = %d, b = %d\n", *a, *b);
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swapByValue(x, y);
    printf("After Call by Value: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After Call by Reference: x = %d, y = %d\n", x, y);
}

