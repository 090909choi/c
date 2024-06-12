#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
	int a,h;
	stack<pair<int,int> > t;
	cin >> a;
	for(int i = 1;i<=a;i++){
		cin >> h;
		if(t.empty()){
			t.push({i,h});
			cout << "0 ";
		}
		else
		{
			while(!t.empty()){
				if(t.top().second<h){
					t.pop();
				}
				else{
					cout << t.top().first << " ";
					break;
				}
			}
			if(t.empty()){
				cout << "0 ";
			}
			t.push({i,h});
		}
	}
	return 0;
}
