#include<stdio.h>

int  main()
{
	int a;
	
	scanf("%d",&a);
	
	if(a<=11)
	{
		printf("�������");
	}
	else if(11<a && a<=50)
	{
		printf("������");
	}
	else if(50<a && a<=80)
	{
		printf("��������");
	}
	else if(80<a && a<=1000)
	{
		printf("���ζ�,�ΰ������� �˵�");
	}
	else if(a>1000)
	{
		printf("����");
	}
	return 0;
}
