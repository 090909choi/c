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
			printf("�� ���߾��.");
			break;
		case 8:
			printf("���߾��.");
			break;
		case 7:
			printf("ȭ����.");
			break;
		default:
			printf("������,�� �� �־��.");
			break;
	}
	return 0; 
}
	
