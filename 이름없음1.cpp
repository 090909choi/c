#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[100];
	int a,b,c,sum;
	int i;
	sum = 0;
	b=0;
	scanf("%d %d",&c,&a);
	for(i = 99;i>=0;i--){
		ar[i] = rand()%99+1;
	}
	for(i = 0;i<100;i++){
		printf("%2d ",ar[i]);
		if(ar[i] == c){
			sum = sum + 1;
		}
	}
	for(i = 0;i<100;i++){
		if(ar[i] == a)
		{
			b = i;
		}
	}
	printf("%d°³ ",sum);
	printf("\n%d¹øÂ° ",b);
	return 0;
}
