#include<stdio.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n%10 == 1)
	{
		n/=10;
	}
	if(n%2 == 0)
	{
		for(int i  = 1; i<100000000;i++)
		{
			n/=2;
			if(n == 0)
			{
				cout << "1";
				break;
			}
		}
		if(n != 0)
		{
			cout << "-1";
		}
	}
	else
	{
		cout << "-1";
	}
}
