#include<stdio.h>
int main()
{
	int x;
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("vowels");
	}
	else if (x>'a' && x<='z')
	{
		printf("consonants");
	}
	else
	{
		printf("not alphabet");
	}
	return 0;
}
