#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int a;
	double* ar;
	scanf("%d",&a);
	ar = (double*)malloc(sizeof(double)*a);
	for(int i = 0;i<a;i++){
		scanf("%lf",&ar[i]);
	}
	for(int i = 0;i<a;i++){
		printf("%lf ",ar[i]);
	}
	
	return 0;
}
