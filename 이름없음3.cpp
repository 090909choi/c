#include<stdio.h>

int main()
{
	int x;
	x = 10;
	
	int* p;
	p = &x;
	
	printf(" %d ",*p);
	return 0;
}
