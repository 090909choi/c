#include<stdio.h>

int main()
{
	int a;
	int b;
	int c; 
	
	printf("창의성,공익성,협동성의 점수를 입력하세요. :");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("%d",a>=80 && b>=80 && c>=80);
	return 0;
}
