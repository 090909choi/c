#include<stdio.h>

int main()
{
	int num;
	int num1; 
	printf("정수를 두개 입력해주세요. :");
	scanf("%d,%d",&num,&num1);
	
	if(num<num1)
	{
		if(num1%num==0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지않음");
		}
	}
	else
	{
		if(num%num1==0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지않음");
		}
	}
	return 0; 
	}
	
