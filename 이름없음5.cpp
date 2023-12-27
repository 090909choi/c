#include<stdio.h> 

int main()
{
	int h,z,i,j;
	h=19;
	z=2;
	int ar[5][5] = {0};
	for(i = 0;i<=4;i++){
		for(j=0;j<=i;j++){
			if(i==j)
			{
				ar[i][j] = 0;
			}
			else
			{
				ar[i][j] = h;
				h-=2;
			}
		}
		printf("\n");
	}
	for(i = 0;i<4;i++){
		for(j=i+1;j<=4;j++){
				ar[i][j] = z;
				z+=2;
		}
	}
	for(i = 0;i<=4;i++){
		for(j = 0;j<=4;j++){
			printf("%3d ",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
