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
	
	printf("c�� ���� : %.2lf\nc�� �ѷ� : %.2lf",c.ar,c.ci);
	return 0;
	
}
