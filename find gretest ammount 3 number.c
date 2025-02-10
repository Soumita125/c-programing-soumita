#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d");
	if (a>b)
	{
		if(a>c)
			printf("a is greatest");
		else
			printf("c is greatest");
	}
	else
	{
		if(a>c)
			printf("bis greatest");
		else
			printf("c is greatest");
	}
	return 0;
}
