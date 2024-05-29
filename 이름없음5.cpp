#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int left,int right){
	return left > right;
}

int main(){
	int n,m,v;
	pair<int,int> p[10001];
	int b[10001];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> m >> v;
		p[i] = make_pair(m,v);
	}
	for(int i = 0;i < n;i++){
		b[i] = p[i].first*(p[i].second*p[i].second)/2;
	}
	sort(b,b+n,cmp);
	for(int i = 0;i<n;i++){
		if(b[0] == p[i].first*(p[i].second*p[i].second)/2) cout << p[i].first << "  " << p[i].second << "\n";
		else if(b[1] == p[i].first*(p[i].second*p[i].second)/2) cout << p[i].first << "  " << p[i].second << "\n";
	 	else if(b[2] == p[i].first*(p[i].second*p[i].second)/2) cout << p[i].first << "  " << p[i].second << "\n";
	}
	return 0;
}
