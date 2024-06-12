#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n,k,sum = 0;
	stack<int> q;
	cin >> n;
	for(int i  = 0;i<n;i++){
		cin >> k;
		q.push(k);
		if(q.top() == 0)
		{
			q.pop();
			q.pop();
		}
	}
	while(!q.empty()){
		sum += q.top();
		q.pop();
	}
	cout << sum;
}
