#include<stdio.h>

int main()
{
	int a,b,c,d;
	float e,f;
	
	printf("몸무게와 키를 입력해주세요. :");
	scanf("%d,%d",&a,&b);
	c=a+10;
	d=b-5;
	f=d/100;
	e=c/f;
	printf("몸무게:%d,키:%d,체질량 지수:%f ",c,d,e);
	return 0;
	
}
