#include<stdio.h>

int main()
{
	int N,count,h;
	scanf("%d",&N);
	h = 0;
	count = 0;
	while(N>=10)
	{
		h = 0;
		while(N)
		{
			h += N %10;
			N /= 10;
		}
		N = h;
		count++;
	}
	printf("%d",count);
	return 0;
}
