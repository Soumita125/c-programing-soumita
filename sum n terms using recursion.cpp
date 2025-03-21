#include<stdio.h>
int sum_of_n(int n)
{
	if (n==0)
	return 0;
	return n+sum_of_n(n-1);
}
int main()
{
	int n;
	printf("enter a positive integer:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("please enter a non negetive number\n");
		return 1;
	}
	printf("sum of first %d natural number is: %d\n",n sum_of_n(n));
	return 0;
}
