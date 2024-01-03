#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[9][9];
	int i,j,a,b,c;
	
	for(i = 0;i<9;i++){
		for(j =0;j<9;j++){
			arr[i][j] = rand()%90+1;
		}
	}
	for(i = 0;i<9;i++){
		for(j =0;j<9;j++){
			if(arr[i][j] > a)
			{
				a = arr[i][j];
				b = i;
				c = j;
			}
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	printf("%d«‡ %dø≠",b,c);
	return 0;
}
