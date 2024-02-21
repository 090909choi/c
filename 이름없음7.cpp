#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p;
	p = (int*)malloc(sizeof(int)*8);
	char* a;
	a = (char*)malloc(sizeof(char));
	
	*p = 3.141592;
	*a = 'A';
	printf("%d\n%c",*p,*a);
	free(p);
	free(a);
	
	return 0;
}
