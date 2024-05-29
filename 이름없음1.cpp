#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,s,e,all = 0,end;
	pair<int,int> p[10001];
	int p2[10001];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> s >> e;
		p[i] = make_pair(s,e);
	}
	for(int i = 0;i<n;i++){
		p2[i] = p[i].second - p[i].first;
	}
	sort(p2,p2+n);
	for(int i = 0;i<n;i++){
		if(all+p2[i] <= 24)
		{
			all += p2[i];
		}
		else{
			end = i-2;
		}
	}
	cout << end;
}
