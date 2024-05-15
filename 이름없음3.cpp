#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

struct library{
	string s;
	int g;
	int u;
};

int main()
{
	int n;
	string w;
	library p[10001];
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		cin >> p[i].s;
		scanf("%d %d",&p[i].g,&p[i].u);
	}
	cin >> w;
	for(int i = 0;i<n;i++){
		if(w == p[i].s)
		{
			printf("%d %d",p[i].g,p[i].u);
		}
	}
	return 0;
}
