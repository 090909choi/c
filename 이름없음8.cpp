#include<stdio.h>

int main()
{
	
	int a,b,c,d;
	
	printf("������ ����� �Է��Ͻÿ�. :");
	scanf("%d",a);
	
	b=a%60;
	c=a/360;
	d=a/60-c*60;
	printf("��:%d,��:%d,��:%d",c,b,d);
	return 0;
}
