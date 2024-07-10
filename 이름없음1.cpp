#include<stdio.h>

int main()
{
	int n,sum = 0;
	scanf("%d",&n);
	while(n>=1){
		if(n%2==0 && n%3==0){
			sum++;
			n+=1;
		}
		
		if(n%3 == 0){
			sum++;
			n/=3;
		}
		if(n%2==0){
			sum++;
			n/=2;
		}
	}
	printf("%d",sum);
}
