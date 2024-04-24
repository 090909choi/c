#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,len1,len2;
	string n;
	cin >> n;
	string bo;
	cin >> bo;
	len1 = bo.size();
	len2 = n.size();
	while(1)
	{
		a = n.find(bo);

		if(a < 0)
		{
			cout << n;
			break;
		}
		else
		{
			n = n.substr(0,a)+n.substr(a+len1,len2);
		}
		if(a == 0)
		{
			cout << "Art!";
			break;
		}
		
	}
	return 0;
}
