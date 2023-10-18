#include<stdio.h>

int main()
{
	
	int a,b,c,d;
	
	printf("마라톤 기록을 입력하시오. :");
	scanf("%d",a);
	
	b=a%60;
	c=a/360;
	d=a/60-c*60;
	printf("시:%d,분:%d,초:%d",c,b,d);
	return 0;
}
