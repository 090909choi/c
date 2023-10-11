#include<stdio.h>

int main()
{
	int a;
	int b;
	
	printf("한글과 영어 타자 속도를 입력해주세요. :");
	scanf("%d,%d",&a,&b);
	printf("%d",a>=180 && b>=150);
	return 0;
}
