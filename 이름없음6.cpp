#include<stdio.h>

int main()
{
	int i = 7;
	int z = 1;
//	int a = 6;
	
	do
	{
		i=7;
		printf("\n");
		printf("%dÇÐ³â ",z);
		do
		{
			printf("%d¹Ý ",i);
			i--;
		}while(i>=1);
		z++;
//		a=a-1;
	}while(z<=6);
	return 0;
}
