#include<stdio.h>

int main()
{
	int N,K,a;
	int arr[10];
	
	a = 0;
	scanf("%d %d",&N,&K);
	for(int i = 1;i<=N;i++){
		if(N%i==0)
		{
			arr[a]=i;
			a++;
		}
	}
	printf("%d",arr[K-1]);
	
	return 0;
}
