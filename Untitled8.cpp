#include<stdio.h>

int main()
{
	double num;
	printf("�Ǽ��� �Է����ּ���. :");
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
