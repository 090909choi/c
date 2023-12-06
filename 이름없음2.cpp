#include<stdio.h>

int main()
{
	int num;
	scanf ("%d",&num);
	if(num%2==0&&num%3==0)
	{
		printf("2와 3의 공배수 입니다."); 
	}
	else
	{
		printf("2와 3의 공배수가 아닙니다.");
	}
}
