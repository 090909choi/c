#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n;
	pair<int,double> p[10001];
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int m;
		double a;
		scanf("%d %lf",m,a);
		p[i] = make_pair(m,a);
	}
	int i,im;
	double ia;
	scanf("%d %d %lf",&i,&im,&ia);
	p[i-1] = make_pair(im,ia);
	double sum_a = 1;
	int sum_m = 0;
	for(int i = 0;i<n;i++){
		sum_m += p[i].first;
		sum_a *= p[i].second;
	}
	int f = sum_m * sum_a;
	printf("%d",f);
	return 0;
}
