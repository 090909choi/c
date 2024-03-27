#include<stdio.h>

int main()
{
	int n,m;
	int map[101][101] = {0}; 
	scanf("%d %d",&n,&m);
	for(int i = 0;i<m;i++){
		int from,to,car;
		scanf("%d %d %d",&from,&to,&car);
		if(map[from-1][to-1] != 0)
		{
			if(car > map[from-1][to-1])
			{
				map[from-1][to-1] = car;
			}
		}
		else
		{
			map[from-1][to-1] = car;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
