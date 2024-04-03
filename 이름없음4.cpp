#include<stdio.h>

int main()
{
	int T,A,B,C;
	scanf("%d",&T);
	if(T<60){
		C = T/10;
	}
	else if(T<300){
		B = T/60;
		C = T%60/10;
	}
	else if(T<=10000){
		A = T/300;
		B = T%300/60;
		C = T%60/10;
	}
	if(T%10 == 0)
	{
		printf("%d %d %d",A,B,C);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
