#include<stdio.h>

int main()
{
	int n,a[10001],sum = 0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<n;i++){
		if(a[i] + a[i+1] > a[i+2]){
			sum += (a[i] + a[i+1]);
			i+=2;
		}
	}
	printf("%d",sum);
	return 0;
}
