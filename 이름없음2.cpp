#include<stdio.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	stack<int> m;
	queue<string>a;
	int q,n;
	string w;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> q >> w;
		m.push(q);
		a.push(w);
	}
	while(!m.empty()){
		cout << m.top() << " ";
		m.pop();
	}
	while(!a.empty()){
		cout << a.front() << " ";
		a.pop();
	}
}
