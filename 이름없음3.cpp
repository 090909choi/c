#include<stdio.h>
#include<queue>
using namespace std;

int main(){
	int a[11],b[11];
	int sum = 0;
	for(int i = 0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for(int i = 0;i<10;i++){
		if(a[i] > b[i])
		{
			sum++;
		}
		else if(a[i] < b[i])
		{
			sum--;
		}
		else
		{
			sum+=0;
		}
	}
	if(sum > 0)
	{
		printf("A");
	}
	else if(sum == 0)
	{
		printf("D");
	}
	else
	{
		printf("B");
	}
	return 0;
}
