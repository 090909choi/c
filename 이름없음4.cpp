#include<stdio.h>

int main()
{
	int n,m;
	int fr[100][100];
	scanf("%d %d",&n,&m);
	for(int i = 0;i<m;i++){
		int from,to;
		scanf("%d %d",&from,&to);
		fr[from-1][to-1] = 1;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(fr[i][j] == 1)
			{
				printf("%d",j+1);
			}
		}
		printf("\n");
	}
	return 0;
}
