#include<stdio.h>

int IsMultipleNumber(int a,int b)
{
	if(b%a==0)
	{
		printf("����� "); 
	}
	else
	{
		printf("�ƴ� ");
	}
	return 0;
}

int main()
{
	int re = IsMultipleNumber(12,24);
}
