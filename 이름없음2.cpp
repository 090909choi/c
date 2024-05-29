#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,t[10001],all=0;
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> t[i];
	}
	sort(t+1,t+n+1);
	for(int i = 1;i<=n;i++){
		all += t[i] * (n-1);
	}
	cout << all;
}
