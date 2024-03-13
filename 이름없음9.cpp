#include<stdio.h>

int main()
{
	int day,count;
	int car[80];
	scanf("%d",&day);
	for(int i = 0;i<5;i++){
		scanf("%d",&car[i]);
	}
	for(int i = 0;i<5;i++){
		if(car[i] == day)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
