#include<stdio.h>

struct Stop{
	int j; 
	int h;
};

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	struct Stop a1;
	a1.j = a;
	a1.h = b;
	printf("%dÃÊ°ú!",a1.h-a1.j);	
	return 0;
}
