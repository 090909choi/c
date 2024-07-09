#include<stdio.h>

int fibo(int x){
	
	if(x==1){
		return 1;
	}
	if(x==2){
		return 1;
	}
	if(d[x] != 0){
		return d[x];
	}
	return d[x] = fibo(x-1) + fibo(x-2);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}
