#include<stdio.h>

int main()
{
	int arr[100] = {0};
	int a,count,max;
	scanf("%d",&a);
	for(int i = 0;i<8;i++){
		arr[a%10]++;
		a/=10;
	}
	arr[6] /= 2;
	arr[9] /= 2;
	for(int i = 0;i < 10;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
