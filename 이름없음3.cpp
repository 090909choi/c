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
				map[from-1][from-1] += car*-1;
			}
		}
		else
		{
			map[from-1][to-1] = car;
			map[from-1][from-1] += car*-1;
		}
	}
	for(int i = 0; i<n;i++){
		int k = 0;
		for(int j = 0; j<n;j++){
			k += map[j][i];
		}
		if(k > 0)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
