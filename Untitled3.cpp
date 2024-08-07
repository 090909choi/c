#include<stdio.h>

int main(){
	int p[100];
	int pn = 0;
	bool c[101];
	int n,m;
	scanf("%d %d",&m,&n);
	for(int i = m;i<=n;i++){
		if(c[i] == false){
			p[pn++] = i;
			for(int j = i*i;j<=n;j+=i){
				c[j] = true;
			}
		}
	}
	for(int i = m;i<=n;i++){
		if(p[i] == false){
			printf("%d",i);
		}
	}
}
