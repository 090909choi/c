#include<stdio.h>

int main()
{
	int n,m,max = 0,x,y;
	int cave[101][101] = {0,};
	scanf("%d %d",&n,&m);
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			scanf("%d",&cave[i][j]);
		}
	}
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			if(max<cave[i][j]+cave[i+1][j]+cave[i][j+1]+cave[i-1][j]+cave[i][j-1]){
				max = cave[i][j]+cave[i+1][j]+cave[i][j+1]+cave[i-1][j]+cave[i][j-1];
				x = j;
				y = i;
			}
		}
	}
	printf("ÁÂÇ¥:(%d,%d) ¾ç:%d",x,y,max);
	return 0;
}
