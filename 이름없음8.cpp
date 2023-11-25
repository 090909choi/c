#include<stdio.h>

int DigitNumber(int n)
{
	scanf("%d",&n);
	for(int i = 1; i<=1000000000000000000000000; i++)
	{
		if(n<9)
		{
			return i;
			break;
		}
		else
		{
			n=n/10;
		}
	}	
}

int main()
{
	int re = DigitNumber(10);
	printf("%dÀÚ¸® ",re);
}

