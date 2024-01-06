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
	
	printf(" c1의 좌표 (%d,%d) c1의 반지름%lf",c1.x,c1.y,c1.r);
	printf(" c2의 좌표 (%d,%d) c2의 반지름%lf",c2.x,c2.y,c2.r);
	printf(" c3의 좌표 (%d,%d) c3의 반지름%lf",c3.x,c3.y,c3.r);
	printf(" c4의 좌표 (%d,%d) c4의 반지름%lf",c4.x,c4.y,c4.r);
	
	return 0;
}


