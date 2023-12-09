#include<stdio.h>

int main()
{
	char ch1, ch2;
	
	ch1 = getchar();
	ch2 = getchar();
	if(ch1<=90)
	{
		printf("%c",ch1+32);
	}
	else
	{
		printf("%c",ch1-32);
	}
	if(ch2<=90)
	{
		printf("%c",ch2+32);
	}
	else
	{
		printf("%c",ch2-32);
	}
	return 0;
	
}
