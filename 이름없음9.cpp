#include<stdio.h>

int main()
{
	for(int i = 5;i>=1;i--){
		for(int j = i;j<=5;j++){
			printf("%2d",j);
		}
		printf("\n");
	}
	return 0;
}
