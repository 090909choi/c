#include<stdio.h>

int main()
{
	int num;
	int num1; 
	printf("������ �ΰ� �Է����ּ���. :");
	scanf("%d,%d",&num,&num1);
	
	if(num<num1)
	{
		if(num1%num==0)
		{
			printf("������ ������");
		}
		else
		{
			printf("������ ������������");
		}
	}
	else
	{
		if(num%num1==0)
		{
			printf("������ ������");
		}
		else
		{
			printf("������ ������������");
		}
	}
	return 0; 
	}
	
