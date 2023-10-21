#include<stdio.h>

int main()
{
	double num;
	printf("실수를 입력해주세요. :");
	scanf("%lf",&num);
	
	if(num>0) 
	{
		printf("%lf",num);
	}
	else
	{
		printf("%lf",num*-1);
	}
	return 0;
}
