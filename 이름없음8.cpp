#include<stdio.h>

int  main()
{
	int a;
	
	scanf("%d",&a);
	
	if(a<=190)
	{
		printf("�����,��������");
	}
	else if(190<a && a<=285)
	{
		printf("�����,���� �������� ");
	}
	else if(285<a && a<=720)
	{
		printf("�����,�����ϱ� ");
	}
	else if(720<a && a<=1100)
	{
		printf("�ʰ���,���ر� ");
	}
	else if(1100<a && a<=1350)
	{
		printf("�ʰ���,���ױ� ");
	}
	else if(1350<a && a<=1900) 
	{
		printf("ȣ����,���� ");
	}
	else if(1900<a && a<=2550)
	{
		printf("ȣ����,�뱸�� ");
	}
	else if(2550<a && a<=3000)
	{
		printf("ȣ����,��õ�� ");
	}
	else if(3000<a && a<=3850)
	{
		printf("������,������ ��ձ� ");
	}
	else if(3850<a && a<=5050)
	{
		printf("������,�湫�� �̼��ű�  ");
	}
	else if(5050<a)
	{
		printf("������ձ�");
	}
	return 0;
}
