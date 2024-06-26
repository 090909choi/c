#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct Score{
	char name[10];
	int k;
	int y;
	int s;
};

bool cmp(const Score u,const Score v){
	if(u.k > v.k){
		return true;
	}
	else if(u.k == v.k){
		if(u.y < v.y){
			return true;
		}
		else if(u.y == v.y){
			if(u.s > v.s){
				return true;
			}
			else if(u.s == v.s){
				return strcmp(u.name,v.name) <= 0;
			}
		}
	}
}

int main()
{
	int n;
	Score a[10001];
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%s %d %d %d",a[i].name,&a[i].k,&a[i].y,&a[i].s);
	}
	sort(a,a+n,cmp);
	for(int i = 0;i<n;i++){
		printf("%s\n",a[i].name);
	}
}
