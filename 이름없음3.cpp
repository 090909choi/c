#include<stdio.h>

struct Circle{
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1,c3,c4;
	struct Circle c2 = {-2,-6,3.1415};
	
	c1.x = 5;
	c1.y = 10;
	c1.r = 8;
	
	c3 = c1;
	
	c4.x = c2.y;
	c4.y = c2.x;
	
	printf(" c1�� ��ǥ (%d,%d) c1�� ������%lf",c1.x,c1.y,c1.r);
	printf(" c2�� ��ǥ (%d,%d) c2�� ������%lf",c2.x,c2.y,c2.r);
	printf(" c3�� ��ǥ (%d,%d) c3�� ������%lf",c3.x,c3.y,c3.r);
	printf(" c4�� ��ǥ (%d,%d) c4�� ������%lf",c4.x,c4.y,c4.r);
	
	return 0;
}


