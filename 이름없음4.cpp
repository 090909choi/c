#include<stdio.h>
#include<iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int,int> cr[51][51];
	pair<int,int> temp;
	int n,m,s,h,a1,a2,b1,b2;
	cin >> n >> m;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> s >> h;
			cr[i][j] = make_pair(s,h);
		}
	}
	scanf("%d %d",&a1,&b1);
	scanf("%d %d",&a2,&b2);
	temp = cr[a1][b1];
	cr[a1][b1] = cr[a2][b2];
	cr[a2][b2] = temp;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout << cr[i][j].first;
			printf("  ");
			cout << cr[i][j].second;
			printf("  ");
		}
		printf("\n");
	}
}
