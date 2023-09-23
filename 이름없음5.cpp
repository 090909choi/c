#include<stdio.h>

int main()
{
	int a;
	
	printf("두 자리 자연수를 입력하시오. :");
	scanf("%d",&a);
	int b=a%10;

	int c=(a-b)/10;

	printf("%d",c+b);
	return 0;
	 
}
