#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int res;
	int sum; 
	
	srand(time(NULL));
	
	int arr[10];
	
	for(int i = 0;i<=9;i++){
		arr[i]=rand()%9+1;
		
		printf("%d  ",arr[i]);
		sum += arr[i];
	}
	printf("\nÇÕ°è : %d",sum);
	return 0;
}
