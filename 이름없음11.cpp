#include<stdio.h>
//
int main()
{
	int N,a,m,count,o;
	int x = 1;
	scanf("%d",&N);
	int arr[N] = {0};
	int ar[N] = {0};
	count = 1;
	for(int i = 0;i<N;i++){
		scanf("%d",&a);
		arr[i] = a;
	}
	for(int i = 0;i<N;i++){
		if(arr[i]>m)
		{
			m = arr[i];
			o = i;
		}
	}
	for(int i = 0;i<N;i++){
		if(arr[i] == m)
		{
			ar[i]  = 1;
		count  +=1;
		}
	ar[o] = 1;
	}
	for(int j = 0;j<N;j++){
	for(int i = 0;i<N;i++){
		if(ar[i] != x)
		{
			if(arr[i]>m)
			{
				m = arr[i];
				ar[i] = count;
			}
			else if(arr[i] == m)
			{
				ar[i]  = count;
				count  +=2;
			}
		}
	}
	x++;
}
	for(int i = 0;i<N;i++){
		printf("%d  ",ar[i]);
	}
}
