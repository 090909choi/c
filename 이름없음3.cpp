#include<stdio.h>

int main()
{
	int i,j,sum;
	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
					{0,0,0,0,0,0,0,2,0},
					{0,0,0,0,1,0,0,0,0},
					{0,2,0,1,0,0,1,0,0},
					{0,0,0,1,0,0,0,0,0},
					{0,0,1,0,0,0,1,0,0}};
//	sum = 0;	
	for(i = 0;i<6;i++){
		for(j = 0;j<9;j++){
			if(ar[i][j] == 2)
			{
//				sum+=1;
//				printf("%dÇà %d¿­ ",i,j);
				ar[i-1][j] = 5;
				ar[i][j-1] = 5;
				ar[i][j+1] = 5;
				ar[i+1][j] = 5;	
			}
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
//	printf("%d°³ ",sum);
	return 0;
}
