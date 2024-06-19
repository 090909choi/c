#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	for(int i = 0;i<n;i++){
		cout << a[i] << "\n";
	}
}
