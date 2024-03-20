#include<stdio.h>

int main()
{
int n,max = 0,sum = 0;
	scanf("%d",&n);
	int ar[1000];
	for(int i = 0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(int i = 0;i<n;i++){
		if(ar[i+1] - ar[i] > max)
		{
			max =ar[i+1] - ar[i];
			sum = i;
		}
	}
	printf("%d %d",sum+1,sum+2);
	return 0;
}
