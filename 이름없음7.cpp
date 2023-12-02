#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	double res;
	double sum; 
	int m;
	
	srand(time(NULL));
	
	double arr[10];
	
	for(int i = 0;i<=9;i++){
		m=rand()%989+11;
		arr[i]=m/10.0;
		printf("%.1f  ",arr[i]);
		if(sum<arr[i])
		{
			sum=arr[i];
		}
	}
	printf("\nmax = %.1f",sum);
	return 0;
}
