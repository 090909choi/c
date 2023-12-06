#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	scanf("%d %d %d" ,&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
	{
		printf("%d가 가장 큰 수입니다.",num1);
	}
	else if(num2>num1&&num2>num3)
	{
		printf("%d가 가장 큰 수입니다.",num2);
	}
	else if(num3>num2&&num3>num1)
	{
		printf("%d가 가장 큰 수입니다.",num3);
	}
}
