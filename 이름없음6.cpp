#include<stdio.h>

int main()
{
	int i,j,a,sum;
	int ar[6][5] = {{23,22,27,21,24},
					{21,22,25,24,23},
					{20,23,22,21,24},
					{25,26,24,27,28},
					{26,24,28,29,26},
					{27,28,29,26,27}};
	scanf("%d",&a);
	sum = 0;
//	for(i = 0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%d ",ar[a-1][j]);
			sum+=ar[a-1][j];
		}
//		printf("\n");
//	}
	printf("\n%d",sum);
}
