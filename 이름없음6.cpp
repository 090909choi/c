#include<stdio.h>

int main()
{
	int i,n;
	
	for (i =0; i < 10; i++)
	{
		printf("%d",(i+1)*n);
		n*=-1;
	}
	return 0; 
}
