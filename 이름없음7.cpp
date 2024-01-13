#include<stdio.h>
#include<string.h>

int main()
{
	int n,a,b;
	b = 0;
	scanf("%d",&n);
	while(n>0){
		a = n%10;
		b = b+a;
		n/=10;
	}
	n = 0;
	a = 0;
	while(b>0){
		a = b%10;
		n = n+a;
		b/=10;
	}
	printf("%d",n);
	return 0;
}
