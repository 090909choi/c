#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int num1=rand() % 6+1;
	int num2=rand() % 6+1; 
	printf("첫번째 주사위:%d \n",num1);
	printf("두번째 주사위:%d \n",num2);
	if(num1==num2)
	{
		printf("보너스~~");
		int num3=rand() % 6+1;
		int num4=rand() % 6+1;
		printf("첫번째 주사위:%d \n",num3);
		printf("두번째 주사위:%d \n",num4);
		printf("앞으로 %d칸 가세요. ",num1+num2+num3+num4);
	}
	else
	{
		printf("앞으로 %d칸 가세요. ",num1+num2);
	}
	
}
