#include<stdio.h>

int main()
{
	int arr[80];
	int a,b,count;
	count = 0;
	scanf("%d",&a);
	for(int i = 0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<a;i++){
		scanf("%d",&b);
		if(b==arr[i])
		{
			count = count + 1;
		}
	}
	printf("%d",count);
}
