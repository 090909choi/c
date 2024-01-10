#include<stdio.h>

struct Nanugi{
	int mo;
	double gab;
};

int main()
{
	int a,b;
	struct Nanugi a1;
	scanf("%d %d",&a,&b);
	a1.gab = a/b;
	a1.mo = a%b;
	printf("°ª : %d\n¸ò : %lf",a1.gab,a1.mo);
	return 0;
}
