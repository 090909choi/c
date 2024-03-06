#include<stdio.h>

int main()
{
	int a,b,c,d,e,ALL;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	a = a*a;
	b = b*b;
	c = c*c;
	d = d*d;
	e = e*e;
	ALL = a+b+c+d+e;
	ALL  = ALL % 10;
	printf("%d",ALL);
}
