#include<stdio.h>
int d[5001] = {0,};

int dp(int x){
	
}

int main(){
	int n;
	d[3] = 1;
	d[5] = 1;
	scanf("%d",&n);
	
	for(int i = 6;i<=n;i++){
		if(d[i-3]){
			d[i] = d[i-3] + 1;
		}
		if(d[i-5]){
			d[i] = d[i-5] + 1;
		}
	}	
	
	if(d[n]){
		printf("%d",d[n]);
	}
	else{
		printf("-1");
	}
}
