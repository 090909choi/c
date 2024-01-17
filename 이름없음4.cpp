#include<stdio.h>

int main()
{
	int a,i,b,sum;
	
	scanf("%d",&a);
	int arr[80];
	sum = 0;;
	for(i = 0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	printf("ÇÐ»ý ´ä :");
	for(i = 0;i<a;i++){
		scanf("%d",&b);
		if(b==arr[i])
		{
			sum+=1;
		}
	}
	printf("\n%d",sum);
	
	return 0;
}
