#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int InputData(int ar[]);
int PrintArray(int ar[]);
int GetMax(int *ar);
int GetMin(int *ar);

int main()
{
	int ar[10] = {0};
	int max,min;
	
	InputData(ar);
	max = GetMax(ar);
	min = GetMin(ar);
	
	return 0;
}
int InputData(int ar[])
{
	for(int i = 0;i<10;i++){
		ar[i] = rand()%100+1;
	}
}
int PrintArray(int ar[])
{
	for(int i = 0;i<10;i++){
		printf("%d ",ar[i]);
	}
}

