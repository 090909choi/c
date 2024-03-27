#include<stdio.h>

int main()
{
	int map[101][101] = {0};
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		for(int j = y;j<y+10;j++){
			for(int k = x;k<x+10;k++){
				map[j][k] = 1;
			}
		}
	}
	int ans = 0;
	for(int i = 0;i<101;i++){
		for(int j = 0;j<101;i++){
			ans += map[i][j];
		}
	}
	printf("%d",ans);
	return 0;
}
