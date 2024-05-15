#include<stdio.h>
#include<iostream>
#include<vector>

struct student{
	int id;
	char name[10001];
	int sum1;
	int sum2;
};

int main()
{
	student p[10000];
	char name[10001];
	int n,a,id,sum1,sum2;
	char nam[10001];
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d %s %d %d",&p[i].id,p[i].name,&p[i].sum1,&p[i].sum2);
	}
	scanf("%d",&a);
	for(int i = 0;i<a;i++){
		scanf("%s",nam);
		for(int j = 0;j<n;j++){
			if(p[j].name == nam)
			{
				printf("%d %d %d",p[j].id,p[j].sum1,p[j].sum2);
			}
		}
	}
	return 0;
}
