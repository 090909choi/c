#include<stdio.h>

int main()
{
	int ar[] = {11,21,31,41,51,61,71};
	int* p;
	int* q;
	int* r;
	int i;
	
	p = ar;
	
	for(i = 0; i <(sizeof(ar)/sizeof(ar[0])); i++);
	{
		printf("%d ",*(ar+i));
	}
	return 0;
}
