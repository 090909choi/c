#include<stdio.h>
const int max = 1000000;
int prime[max];
int pn;
bool check[max+1];
int main(){
	for(int i = 2;i<=max;i++){
		if(check[i] == false){
			prime[pn++] = i;
			for(int j = i*i;j<=max;j += i){
				check[j] = true;
			}
		}
	}
	while(true){
		int n;
		scanf("%d",&n);
		if(n == 0){
			break;
		}
		for(int i = 1;i<pn;i++){
			if(check[n - prime[i]] == false){
				printf("%d = %d + %d \n",n,prime[i],n - prime[i]);
				break;
			}
		}
	}
	return 0;
}
