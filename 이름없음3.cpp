#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	long M,N,all = 0;
	vector<int>v;
	scanf("%d %d",&M,&N);
	for(int i = 1;i*i<=N;i++){
		if(i*i >= M && i*i <= N)
		{
			v.push_back(i*i);
		}
	}
	for(int i = 0;i<v.size();i++){
		all += v[i];
	}
	printf("%lld\n",all);
	printf("%d",v[0]);
}
