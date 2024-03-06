#include<stdio.h>

int main()
{
	int N,i,M,d;
	d = 0;
	scanf("%d %d",&N,&M);
	scanf("%d",&i);
	int arr[N];
	while(d<N)
	{
		for(int j = 0; j < M;j++){
		arr[d] = j;
		d++;
		}
	}
	printf("%d",arr[i]);
	return 0;
}
