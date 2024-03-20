#include<stdio.h>

int main()
{
	int n;
	int si[10000];
	int count = 0;
	scanf("%d",&n);
	for(int i = n-1;i>=0;i--){
		scanf("%d",&si[i]);
	}
	for(int i = 0;i<n;i++){
		if(si[i]<=si[i+1])
		{
			count += (si[i+1]) - (si[i]-1);
			si[i+1] = si[i]-1;
		}
	}
	printf("%d",count);
}
