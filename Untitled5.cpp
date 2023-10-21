#include<stdio.h>

int main()
{ 
	int num;
	
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("양수");
	}
	else if(num<0)
	{
		printf("음수");
	} 
	else if(num==0)
	{
		printf("0입니다");
	}
	 return 0;
	

}
