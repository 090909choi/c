#include<stdio.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	queue<int> q;
	int n,k,a= 0;
	cin >> n >> k;
	for(int i  = 1;i<=n;i++){
		q.push(i);
	}
	while(!q.empty()){
		for(int i = 0;i<k-1;i++){
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << " ";
		q.pop();
	}
}
