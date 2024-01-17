#include<stdio.h>

int main()
{
	int i,b,sum;
	float a;
	int arr[80];
	sum = 0;
	a=5;
	for(i = 0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0;i<10;i++){
		scanf("%d",&b);
		if(b>arr[i])
		{
			sum+=1;
		}
		if(b == arr[i])
		{
			a-=0.5;
		}
	}
	if(sum>a)
	{
		printf("B");
	}
	else if(sum<a)
	{
		printf("A");
	}
	else if(sum=a)
	{
		printf("D");
	}
	
	return 0;
} 
