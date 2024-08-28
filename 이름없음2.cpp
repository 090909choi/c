#include<stdio.h>
#include<string.h> 

int main()
{
	char a[1000];
	char b[1000];
	int n;
	scanf("%s",a);
	scanf("%s",b);
	n = strcmp(a,b);
	printf("%d",n);
	return 0;
}
