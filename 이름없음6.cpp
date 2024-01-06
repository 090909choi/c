#include<stdio.h>

struct Circle{
	int x;
	int y;
	double r;
	double ar;
	double ci;
};

int main()
{
	struct Circle c;
	scanf("%lf",&c.r);
	c.ar = c.r*c.r*3.14;
	c.ci = 2*c.r*3.14;
	
	printf("c의 넓이 : %.2lf\nc의 둘레 : %.2lf",c.ar,c.ci);
	return 0;
	
}
