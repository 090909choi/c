#include<stdio.h>

int main()
{
	int a;

	scanf("%d",&a);
	int b=a%10;
	int c=((a%100)-b)/10;
	int d=(a-b-c)/100;
	printf("%d",b+c+d);
	return 0;
}
