#include<stdio.h>

int IsMultipleNumber(int a,int b)
{
	if(b%a==0)
	{
		printf("¹è¼öÀÓ "); 
	}
	else
	{
		printf("¾Æ´Ô ");
	}
	return 0;
}

int main()
{
	int re = IsMultipleNumber(12,24);
}
