#include<stdio.h>

int n;
int p[11];
int ans;
int Performance(int index,int sum){
	if(index == n){
		if(ans<sum) ans = sum;
		return 0;
	}
	int first = p[index];
	int second = p[index] * p[index] - 40 * p[index] + 300;
	Performance(index+1,sum+first);
	Performance(index + 1,sum + second);
}

int main()
{
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&p[i]);
	}
	Performance(0,0);
	printf("%d",ans);
	return 0;
}
