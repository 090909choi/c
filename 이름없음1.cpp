#include<stdio.h>

int main()
{
	int n,m,sum = 0,sum1 = 0;
	scanf("%d %d",&n,&m);
	int ar[m][n] = {0,};
	
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	
	for(int i = 0;i<m;i++){
		sum = 0;
		for(int j = 0;j<n;j++){
			sum += ar[i][j];
			sum += ar[i-1][j];
			sum += ar[i+1][j];
			sum += ar[i][j-1];
			sum += ar[i][j+1];
			if(sum1 < sum)
			{
				sum1 = sum;
			}
			sum = 0;
		}
	}
	printf("%d",sum1);
	return 0;
}
