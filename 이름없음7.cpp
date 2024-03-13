#include<stdio.h>

int main()
{
	int arr[80];
	int ar[80];
	int count = 0;
	for(int i = 0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(int j = 0;j<10;j++){
		scanf("%d",&ar[j]);
	}
	for(int n = 0;n<10;n++){
		if(arr[n]>ar[n])
		{
			count++;
		}
	}
	if(count>5)
	{
		printf("A");
	}
	if(count=5)
	{
		printf("D");
	}
	if(count<5)
	{
		printf("B");
	}
	return 0;
}
