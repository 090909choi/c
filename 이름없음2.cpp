#include<stdio.h>

int main()
{
	int n,count = 0;
	scanf("%d",&n);
	n = 1000-n;
	count += n/500;
	n %= 500;
	count += n/100;
	n %= 100;
	count += n/50;
	n %= 50;
	count += n/10;
	n %= 10;
	count += n/5;
	n %= 5;
	count += n/1;
	n %= 1;
	printf("%d",count);
	return 0;
}
