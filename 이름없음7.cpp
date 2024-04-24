#include<iostream>
using namespace std;

int main()
{
	string n,m;
	cin >> n;
	cin >> m;
	if(n.size() > m.size()) cout << n;
	else if(n.size() < m.size()) cout << m;
	else if(n.size() == m.size())
	{
		if(n > m) cout << n;
		else cout << m;
	}
	return 0;
}
