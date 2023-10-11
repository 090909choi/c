#include<stdio.h>

int main()
{
	int a;
	int b;
	int c; 
	
	printf("50m달리기,철봉기에 오래 매달리기,팔굽혀 펴기 기록을 입력해주세요. :");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("%d",a<=7.8 || b>125.7 || c>=45);
	return 0;
}
