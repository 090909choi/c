#include<stdio.h>

int d[10001];

int main()
{
	int n,a[10001];
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	d[1] = a[1];
	d[2] = a[1] + a[2];
	
	for(int i = 3;i<=n;i++){
		int option1 = d[i-1];
		int option2 = d[i-2] + a[i];
		int option3 = d[i-3] + a[i-1] + a[i];
		if(option1 > option2){
		if(option1 > option3){
			d[i] = option1;
		}
		else{
			d[i] = option3;
		}
		}
		else{
			if(option2 > option3){
				d[i] = option2;
			}
			else{
				d[i] = option3;
			}
		}
	}
	printf("%d",d[n]);
	return 0;
}
