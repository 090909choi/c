#include<stdio.h>

int  main()
{
	int a,b,c;
	
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a<b && a<c)
	{
		printf("ù ��° ������ ���� ����,");
	}
	if(b<a && b<c)
	{
		printf("�� ��° ������ ���� ����,");
	}
	if(c<b && c<a)
	{
		printf("�� ��° ������ ���� ����,");
	}
	if(a>b && a>c)
	{
		printf("ù ��° ������ ���� ŭ ");
	}
	if(b>a && b>c)
	{
		printf("�� ��° ������ ���� ŭ ");
	}
	if(c>b && c>a)
	{
		printf("�� ��° ������ ���� ŭ ");
	}
	return 0; 
}
