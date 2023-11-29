#include<stdio.h>

int ReverseNum(int n)
{
	int sum1;
	sum1=n/1000;
	printf("%d ",sum1);
	int sum2;
	sum2=n/100;
	int sum6= sum2;
	printf("%d ",sum2-sum1*10);
	int sum3;
	sum3=n/10;
	int sum5 = sum3;
	printf("%d ",sum3-(sum6)*10);
	int sum4;
	sum4=n/1;
	printf("%d ",sum4-sum5*10);
	return 0;
}

int main()
{
	
	int re = ReverseNum(1234);
}
