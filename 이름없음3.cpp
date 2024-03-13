#include<stdio.h>

int main()
{
	int N,Ai,a;
	a = 0;
	scanf("%d",&N);
	for(int i = 0;i<N;i++){
		scanf("%d",&Ai);
		a = a+Ai;
	}
	a = a/N;
	if(a>=80)
	{
		printf("easy");
	}
	else if(a>=60)
	{
		printf("normal");
	}
	else if(a<=60)
	{
		printf("hard");
	}
	return 0;
}
