#include<stdio.h>

struct Coordi {
	int x;
	int y;
};

struct Circle{
	struct Coordi cen;
	double r;
};

int main()
{
	struct Circle c1;
	struct Circle c2 = {{4,5},12.4};
	struct Circle c3;
	scanf("%d %d %lf",&c3.cen.x,&c3.cen.y,&c3.r);
	printf("c2의 좌표 : (%d,%d)반지름 : %.2lf\n",c2.cen.x,c2.cen.y,c2.r);
	printf("c3의 좌표 : (%d,%d)반지름 : %.2lf\n",c3.cen.x,c3.cen.y,c3.r);
		
	return 0;
}
