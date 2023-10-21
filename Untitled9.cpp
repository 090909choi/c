#include<stdio.h>

int main()
{
	double num;
	double num1;
	double num2;
	double num3;
	double num4; 
	printf("실수를 다섯개 입력해주세요. :");
	scanf("%lf,%lf,%lf,%lf,%lf",&num,&num1,&num2,&num3,&num4);
	
	if(num>num1&&num>num2&&num>num3&&num>num4)
	{
		printf("%lf",num);
	}
	else if(num1>num&&num1>num2&&num1>num3&&num1>num4)
	{
		printf("%lf",num1);
	}
	else if(num2>num1&&num2>num&&num2>num3&&num2>num4)
	{
		printf("%lf",num2);
	}
	else if(num3>num1&&num3>num2&&num3>num&&num3>num4)
	{
		printf("%lf",num3);
	}
	else if(num4>num1&&num4>num2&&num4>num3&&num4>num)
	{
		printf("%lf",num4);
	}
	return 0;
}
