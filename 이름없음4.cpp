#include<stdio.h>

int main()
{
	int n,ar[10000],max = 0,min = 10000;
	int all = 0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(int i = 0;i<n;i++){
		if(max<ar[i])
		{
			max = ar[i];
		}
		if(min>ar[i])
		{
			min = ar[i];
		}
		all += ar[i];
	}
	printf("%d",(all-max-min)/n);
	return 0;
}
