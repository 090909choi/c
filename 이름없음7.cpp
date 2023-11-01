#include<stdio.h>

int main()
{
	int n,sum,c;
	c=0;
	scanf("%d",&n);
	for(int i=6; i<=n; i+=6)
	{
		printf("%d\n",i);
		c=c+1;
		sum=sum+i;
	}
	printf("6의 배수의 개수:%d\n",c);
	printf("합:%d\n",sum);
	return 0;
}
