#include<stdio.h>

int d[5001] = {0,};

int dp(int x){
	if(x==1) return 1;
	if(x==2) return 2;
	
	if(d[x] != 0) return d[x];
	
	return d[x] = (dp(x-1) + 2 * dp(x-2)) % 10007;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",dp(n));
	return 0;
}
