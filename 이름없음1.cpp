#include<stdio.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	stack<int>s;
	queue<int> q;
	for(int i = 1;i<11;i++){
		q.push(i);
		s.push(i);
	}
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	cout << "\n";
	while(!s.empty()){
		cout <<s.top()<<" ";
		s.pop();
	}
	return 0;
}
