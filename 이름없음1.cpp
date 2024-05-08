#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string b;
	string a;
	int count = 0;
	cin >> a;
	cin >> b;
	for(int i = 0;i<=a.size() - b.size();i++){
		if(a.substr(i,b.size()) == b){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
