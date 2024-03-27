#include<stdio.h>

int main()
{
	int n,m,a,b;
	int map[100][100];
	scanf("%d %d",&n,&m);
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&map[i][j]);
			if(map[i][j] == 2)
			{
				a = i;
				b = j;
			}
		}
	}
	while(1){
			if(map[a+1][b] == 1 && map[a][b+1] == 1)
		{
			printf("%d %d",a,b);
			break;
		}
		else if(map[a+1][b] == 0){
			a++;
		}
		else if(map[a+1][b] == 1){
			b++;
		}
	}
	return 0;
}
