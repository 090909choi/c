#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int num1=rand() % 6+1;
	int num2=rand() % 6+1; 
	printf("ù��° �ֻ���:%d \n",num1);
	printf("�ι�° �ֻ���:%d \n",num2);
	if(num1==num2)
	{
		printf("���ʽ�~~");
		int num3=rand() % 6+1;
		int num4=rand() % 6+1;
		printf("ù��° �ֻ���:%d \n",num3);
		printf("�ι�° �ֻ���:%d \n",num4);
		printf("������ %dĭ ������. ",num1+num2+num3+num4);
	}
	else
	{
		printf("������ %dĭ ������. ",num1+num2);
	}
	
}
