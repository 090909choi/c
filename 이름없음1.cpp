#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;
 	for(int i = 0;i<10;i++){
 		int a;
 		scanf("%d",&a);
 		v.push_back(a);
	}
	for(int i = v.size()-1;i>=0;i--){
		printf("%d\n",v[i]);
	}
	return 0;
}
