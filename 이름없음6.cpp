#include<stdio.h>

int main()
{
	int i = 1;
	int n,a,b;
	b=1;
	n=10;
	scanf("%d",&a);
	
	while(1)
	{
		if(a<n)
		{
			printf("%d�� %d�ڸ� ���Դϴ�.",a,b);
			break;
		}
		else
		{
			n=n*10;
			b=b+1;
		}
	}
	return 0;
}
