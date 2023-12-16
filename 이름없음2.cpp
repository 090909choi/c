#include<stdio.h>

int main()
{
	int a;
	double b;
	char c;
	
	a = 153; b = 12.7; c = 'J';
	printf("변수 a의 주소 : %x\n",a);
	printf("변수 b의 주소 : %x\n",b);
	printf("변수 c의 주소 : %x\n",c);
	return 0;
}
