#include<stdio.h>

int main()
{
	int H,M,DM;
	scanf("%d %d",&H,&M);
	scanf("%d",&DM);
	if(DM<60)
	{
		M = M + DM;
	}
	else if(DM>60)
	{
		H = H + DM/60;
		M = M + DM%60;
	}
	if(M>60)
	{
		M -= 60;
		H += 1;
	}
	if(H>23)
	{
		H = H - 24;
	}
	printf("%d %d",H,M);
}
