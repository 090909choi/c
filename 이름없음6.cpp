#include<stdio.h>

int main()
{
	int N,M,count;
	count = 0;
	scanf("%d %d",&N,&M);
	for(int i = N+1;i<M;i++){
		for(int j = 2;j < i;j++){
			if(i%j==0)
			{
				break;
			}
			if(j == i-1)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
