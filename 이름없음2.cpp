#include<stdio.h>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	queue<pair<int,int>> q;
	q.push(make_pair(a,0));
	while(!q.empty())
	{
		int num = q.front().first;
		int count = q.front().second;
		q.pop();
		if(num == b)
		{
			cout >> count;
			return 0;
		}
		if(num * 2 <= b)
		{
			q.push(make_pai(num*2,count+1));
		}
		if(num*10+1<=b)
		{
			q.push(make_pair(num*10+1,count+1));
		}
	}
	cout >> "-1";
	return 0;
}
