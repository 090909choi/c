#inc#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int left,int right){
	return left > right;
}


int main(){
	int n;
	int l[10001];
	int e[10001];
	int p[10001];
	cin >> n;
	for(int i = 0; i<n;i++){
		cin >> l[i] >> e[i] >> p[i];
	}
	sort(l,l+n,cmp);
	sort(e,e+n,cmp);
	sort(p,p+n,cmp);
	for(int i = 0; i<n;i++){
		if(l[i] == l[i+1]){
			if(e[i] == e[i+1]){
				if(p[i] > p[i+1]); 
			}
		}
	}
}
