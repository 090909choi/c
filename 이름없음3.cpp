#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	double data1[10];
	double data2[10];
	int n,sum = 0;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> data1[i];
		data2[i] = data1[i];
	}
	sort(data2,data2+n);
	for(int i = 0;i<n;i++){
			if(data1[i] != data2[i])
			{
				sum++;
			}
	}
	cout << sum;
	return 0;
}
