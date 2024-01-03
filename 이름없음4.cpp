#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int InputData(int *p);
int PrintArray(int ar[]);
int GetMax(int *ar);
int GetMin(int *ar);

int main()
{
	int ar[10] = {0};
	int max,min;
	
	InputData(ar);
	PrintArray(ar);
	max = GetMax(ar);
	min = GetMin(ar);
	
	return 0;
}
int InputData(int *p)
{
	int i;
	for(i = 0;i<10;i++){
		*(p+i) = rand()%99+1;
	}
}
int PrintArray(int ar[])
{
	for(int i = 0;i<10;i++){
		printf("%d ",ar[i]);
	}
}
int  GetMax(int *ar)
{
	int a;
	for(int i = 0;i<10;i++){
		if(*(ar+i)>a)
		{
			a = *(ar+i);
		}
	}
	printf("\n%d",a);
	return a;
}
int  GetMin(int *ar)
{
	int b;
	b = 9999999;
	for(int i = 0;i<10;i++){
		if(*(ar+i)<b)
		{
			b = *(ar+i);
		}
	}
	printf("\n%d",b);
	return b;
}

