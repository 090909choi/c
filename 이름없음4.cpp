#include<stdio.h>
int main()
{
	float eye_r;
	float eye_l;
	
	printf("양쪽 시력을 입력해주세요. : ");
	scanf("%f %f", &eye_r, &eye_l) ;
	printf("오른쪽 시력 : %f\n 왼쪽시력 : %f\n", eye_r, eye_l);
	return 0;
}
