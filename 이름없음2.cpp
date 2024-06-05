#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> q;
	int n,m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		q.push(i);
	}
	cout << "<";
	while(q.size() > 1)
	{
		for(int i = 0;i<m-1;i++){
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		
		q.pop();
	}
	for(int i = 0;i<m-1;i++){
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
	cout << ">";
	return 0;
}
