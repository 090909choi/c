#include<stdio.h>

int gcd(int a,int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}

int main()
{
	int n,g[10001],t[10001],ga;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&t[i]);
	}
	for(int i = 1;i<n-1;i++){
		g[i] = t[i+1] - t[i];
	}
	ga = g[1];
	for(int i = 1;i<n;i++){
		ga = gcd(g[i],ga);
	}
	int ans = 0;
	for(int i = 1;i<n-1;i++){
		ans += g[i]/ga-1;
	}
	printf("%d",ans);
	return 0;
}
