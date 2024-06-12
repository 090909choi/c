#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string n;
	cin >> n;
	stack<int> q;
	int sum = 0;
	for(int i = 0;n[i];i++){
		if(q.empty())
		{
			q.push(n[i]);
		}
		else{
			if(n[i] == '('){
				q.push(n[i]);
			}
			else if(n[i-1] == '('){
				q.pop();
				sum += q.size();
			}
			else
			{
				q.pop();
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
