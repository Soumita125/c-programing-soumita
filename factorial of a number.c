#include<stdio.h>
int main()
{
	int n,pdt=1;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		pdt=pdt+i;
	}
	printf("factorial of the no.%d",pdt);
	return 0;
}
