#include<stdio.h>

int main()
{
	int n,h[100] = {0,},c,count = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&h[c]);
		c++;
	}
	for(int i = 1;i<=n;i++){
		if(h[i] > h[i+1]  && h[i] > h[i-1])
		{
			count += 1;
		}
	}
	printf("%d",count);
	return 0;
}
