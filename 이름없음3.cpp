#include<stdio.h>
#include<iostream>
#include<utility>
using namespace std;

int main(){
	pair<int,int> score[10001];
	pair<int,int> max;
	int n,t,s,result;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> t >> s;
		score[i] = make_pair(t,s);
	}
	for(int i = 0;i<n;i++){
		if(max < score[i]){
			max = score[i];
			result = i;
		}
	}
	printf("%d",result+1);
	return 0;
}
