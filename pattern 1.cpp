#include<stdio.h>
int main()
{
	for(int i=4;i>=1;i--)
	{
		for(int j=4;j>=5-i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
