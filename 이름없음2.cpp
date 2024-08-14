#include<stdio.h>

int a[10000][10000];
int b[10000][10000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(a[i][j] == '.'){
				b[i][j] = 0;
			}
			else
			{
				b[i][j] = '*';
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(a[i][j] != '.'){
				b[i-1][j+1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
