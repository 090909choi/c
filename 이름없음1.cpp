#include<stdio.h>
#include<string.h>

int main()
{
	char arr[80]={0};
	int a;
	scanf("%s",&arr);
	a = strlen(arr);
	for(int i=0;i<a;i++){
//		if(arr[i] <= 90 && arr[i]>=65)
//		{
//			printf("%c",arr[i]);
//		}
//		else
//		{
//			if(arr[i] >= 97 && arr[i] <= 122)
//			{
//				printf("%c",arr[i]);
//			}
//		}
//		if(arr[i] <= 57 && arr[i] >= 48)
//		{
//			printf("%c",arr[i]);
//		}
		if(arr[i] <= 90 && arr[i]>=65)
		{
			printf("%c",arr[i]+32);
		}
		if(arr[i] >= 97 && arr[i] <= 122)
		{
			printf("%c",arr[i]-32);
		}
		}
	
	return 0;
}
