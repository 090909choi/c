#include<stdio.h>

int main()
{ 	
	int a = 1;
	int n,m;
	scanf("%d,%d",&n,&m);
	while(a<=m)
	{
		int i = 1;
		while(i<=n)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
		a++;
	}
	return 0;
}
