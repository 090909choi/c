#include<stdio.h>
#include<algorithm>
using namespace std;

int stick[100][2];
int dp[100][3]

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 1;i<=n;i++){
			scanf("%d",&a[i][0]);
		}
		for(int i = 1;i<=n;i++){
			scanf("%d",&a[i][1]);
		}
		for(int i = 1;i<=n;i++){
			dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],d[i-1][2]));
			dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + a[i][0];
			dp[i][2] = max(dp[i-1][0],dp[i-1][1]) + a[i][1];
		}
		int ans = max(dp[n][0],max(dp[i][1],dp[i][2]));
		printf("%d\n",ans);
	}
	return 0;
}
