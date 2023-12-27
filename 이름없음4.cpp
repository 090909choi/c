#include<stdio.h>

int main()
{
	int ar[5][5] = {0};
	int i,j,n;
	
	n=1;
//	for(i = 0;i <5;i++){
//		for(j = 0;j<=i;j++){
//			ar[i][j] = n;
//			n++;
//		}
//	}
	for(i = 0;i <5;i++){
		for(j = 4;j>=4-i;j--){
			ar[i][j] = n;
			n++;
		}
	}
	for(i = 0;i<5;i++){
		for(j = 0;j<5;j++){
			printf("%3d",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
