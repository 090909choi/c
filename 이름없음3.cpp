#include<stdio.h>

int main()
{
	int n,m,c,x,y,count = 0;
	scanf("%d %d",&n,&m);
	int arr[100][100] = {0,};
	scanf("%d",&c);
	for(int i = 1;i<=c;i++){
		scanf("%d %d",&x,&y);
		arr[y][x] = -1;
	}
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			if(arr[i][j-1] == -1)
			{
				count += 1;
			}
			if(arr[i+1][j-1] == -1)
			{
				count += 1;
			}
			if(arr[i-1][j] == -1)
			{
				count += 1;
			}
			if(arr[i][j+1] == -1)
			{
				count += 1;
			}
			if(arr[i+1][j-1] == -1)
			{
				count += 1;
			}
			if(arr[i-1][j-1] == -1)
			{
				count += 1;
			}
			if(arr[i-1][j+1] == -1)
			{
				count += 1;
			}
			if(arr[i+1][j+1] == -1)
			{
				count += 1;
			}
			if(arr[i][j] == -1)
			{
				arr[i][j] = -1;
			}
			else
			{
				arr[i][j] = count;
			}
			count = 0;
		}
	}
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
