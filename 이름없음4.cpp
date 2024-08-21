#include<stdio.h>

int main(){
	int n,a,b,count = 0;
	int p[101][101] = {0,};
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d %d",&a,&b);
		for(int j = 0;j<10;j++){
			for(int v = 0;v<10;v++){
				p[a+j][b+v] = 1;
			}
		}
	}
	for(int i = 1;i<=100;i++){
		for(int j = 1;j<=100;j++){
				if(p[a][b] == 1){
					count++;
				}
		}
	}
	printf("%d",count);
}
