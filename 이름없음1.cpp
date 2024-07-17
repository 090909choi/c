#include<stdio.h>
#include<algorithm>
using namespace std;

int stair[301];
int dp[301];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&stair[i]);
	}
	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	
	for(int i = 3;i<=n;i++){
		dp[i] =  max(dp[1] + stair[i],dp[2] + stair[i] - stair[2]);
	}
	printf("%d",&dp[n]);
	return 0;
}
