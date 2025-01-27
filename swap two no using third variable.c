#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d", &a);
    scanf("%d",&b);
	printf("original value Before swapping:%d\n%d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
	return 0;
}

