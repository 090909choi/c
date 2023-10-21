#include<stdio.h>

int main()
{
	int num;
	printf("정수를 입력하세요 :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("짝수임");
	}
	else
	{
		printf("홀수임");
	 } 
	return 0;
}
