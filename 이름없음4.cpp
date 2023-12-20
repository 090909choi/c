#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10];
	int a;
	srand(time(NULL));
	for(int i=0;i<=9;i++){
		arr[i] = rand()%11+10;
	}
	for(int q=0;q<=9;q++){
		for(int z = 0;z<=arr[q]-1;z++){
			printf("*\n");
		}
		printf("%d\n",arr[q]);
	}
}
