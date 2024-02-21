#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int a;
	int* ar;
	scanf("%d",&a);
	ar = (int*)malloc(sizeof(int)*a);
	srand(time(NULL));
	for(int i = 0;i<a;i++){
		ar[i] = rand()%89+10;
	}
	for(int i = 0;i<a;i++){
		printf("%d ",ar[i]);
	}
	
	return 0;
}
