#include<stdio.h>

int main()
{
	int N,a,b,c,d;
	scanf("%d",&N);
	a =  N / 1000;
	d = N%10;
	c = (N%100-d)/10;
	b = N/100 - 10*a;
	printf("%d",a+b+c+d);
	
}
