#include<stdio.h>

int main()
{
	int a;
	
	printf("�� �ڸ� �ڿ����� �Է��Ͻÿ�. :");
	scanf("%d",&a);
	int b=a%10;

	int c=(a-b)/10;

	printf("%d",c+b);
	return 0;
	 
}
