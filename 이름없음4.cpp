#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	scanf("%d",&d);
	
	for(int i=1; i<=d; i++){
	
		scanf("%d,%d,%d",&a,&b,&c);
		if(a>=b+c || b>=c+a || c>=a+b)
		{
			printf("Invalid");
		}
		else if(a==b && a==c && b==c)
		{
			printf("Equilateral");
		}
		else if(a==b && a==c)
		{
			printf("Isosceles");
		}
		else if(a!=b && a!=c && b!=c)
		{
			printf("Scalene");
		}
	}
	return 0;
}
