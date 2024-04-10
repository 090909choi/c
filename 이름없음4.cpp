#include<stdio.h>

int tr(int n,int k)
{
	int pa[30][n];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<30;j++){
			pa[j][i] = 1;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<30;j++){
			printf("%d",pa[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",tr(n,k));
}
