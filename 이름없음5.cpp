#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	string c;
	int a,check = 0;
	
	cin >> c;
	cin >> a;
	
	for(int i = 0;i<a;i++){
		cin >> n;
		if(c == n)
		{
			check = 1;
		}
	}
	if(check == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
} 
