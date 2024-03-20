#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	int M,N,all = 0;
	vector<int>v;
	scanf("%d %d",&M,&N);
	for(int i = 1;i*i>=N;i++){
		if(i*i > M && i*i < N)
		{
			v.push_back(i*i);
			printf("%d",i*i);
		}
	}
	for(int i = 0;i<v.size()-1;i++){
		all += v[i];
	}
	printf("%d\n",v[0]);
	printf("%d",all);
	return 0;
}
