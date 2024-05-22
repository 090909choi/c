#include<stdio.h>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
	stack<int> a;
	char n[101];
	cin >> n;
	for(int i = 0;n[i];i++){
		if('0' <= n[i] && n[i] <= '9')
		{
			a.push(n[i] - '0');
		}
		else
		{
			int b = a.top();
			a.pop();
			int c = a.top();
			a.pop();
			if(n[i] == '+')
			{
				a.push(c+b);
			}
			else
			{
				a.push(c-b);
			}
		}
	}
	cout << a.top();
	return 0;
}
