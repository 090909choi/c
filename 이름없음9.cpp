#include<stdio.h>

int main()
{
	int a = 12;
	int b = 3;
	
	a -= b;
	++b;
	printf("a = %d b = %d\n", a, b);
	--b;
	a /= b;	// a = 3 , b = 3
	printf("a = %d b = %d\n", a, b);
	a += b;
	++b;
	printf("a = %d b = %d\n", a, b);
	++b;
	a -= b;
	printf("a = %d b = %d\n", a, b);
	--b;
	a += b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
