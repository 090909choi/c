#include<stdio.h>

int main()
{
	int N,K,m;
	scanf("%d %d",&N,&K);
	m = 0;
	int arr[80];
	for(int i = 1;i<N;i++){
		if(N%i == 0)
		{
			arr[m] = i;
			m++;
		}
	}
	printf("%d",arr[K-1]);
}
