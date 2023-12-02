#include<stdio.h>

int main()
{
	int num[]= {5,2,6,7,8,9,4,3,1};
	int page[10] = {123,57,67,86};
	int i,j;
	for(int i = 0;i<=8;i++){
		printf("%d  ",num[i]);
	}
	for(int i = 0;i<=9;i++){
		printf("%d  ",page[i]);
	}
	return 0;
}
