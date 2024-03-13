#include<stdio.h>

int main()
{
	int A,B,C;
	scanf("%d %d",&A,&B);
	scanf("%d",&C);
	if(B+C >= 60)
	{
		A = (B+C)/60 + A;
		B = (B+C)%60;
	}
	else
	{
		B = B+C;
	}
	printf("%d %d",A,B);
	if(A > 23)
	{
		A = A - 24;
	}
	
	printf("%d %d",A,B);
	return 0;
}
