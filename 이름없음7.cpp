#include<stdio.h>

int main()
{
	int a,b;
	int i = 1;
	b=0;
	while(i<=10)
	{
		scanf("%d",&a);
		if(b<a)
		{
			b=a;
		}
		i++;
	}
	printf("가장 큰 수:%d",b);
	return 0;
}
