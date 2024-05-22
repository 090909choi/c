#include<stdio.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	queue<int> c;
	int n,s,count = 0,max = 0;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> s;
		if(s > max)
		{
			for(int j = 0;j<i;j++){
				c.pop();
			}
			c.push(s);
			max = s;
		}
		else
		{
			c.push(s);
		}
	}
	while(!c.empty())
	{
		c.pop();
		count++;
	}
	cout << count;
}
