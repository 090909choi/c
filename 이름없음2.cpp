#include<stdio.h>

int main()
{
	int N,a,m,count;
	scanf("%d",&N);
	int arr[N];
	int ar[N];
	count = 1;
	for(int i = 0;i<N;i++){
		scanf("%d",&a);
		arr[i] = a;
	}
	for(int i = 0;i<N;i++){
		if(arr[i]>m)
		{
			m = arr[i];
			ar[i] = 1;
			
		}
		else if(arr[i] == m)
		{
			ar[i]  = 1;
			count  +=1;
		}
	}
	for(int i = 0;i<N;i++){
		printf("%d  ",arr[i]);
	}
}
