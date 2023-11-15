#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	e=(a+b+c+d)/4;
	e=e/10;
	switch(e)
	{
		case 9:
			printf("참 잘했어요.");
			break;
		case 8:
			printf("잘했어요.");
			break;
		case 7:
			printf("화이팅.");
			break;
		default:
			printf("힘내요,할 수 있어요.");
			break;
	}
	return 0; 
}
	
