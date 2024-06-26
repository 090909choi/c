#include<stdio.h>
#include<algorithm>
using namespace std;

struct Asia{
	int country;
	int num;
	int score;
};

bool cmp(const Asia left,const Asia right){
	return left.score > right.score;	
}

int main(){
	Asia stud[101];
	int n,check = 0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d %d %d",&stud[i].country,&stud[i].num,&stud[i].score);
	}
	sort(stud,stud+n,cmp);
	int cnt_contry[101] = {0,};
	for(int i = 0;i<n;i++){
		if(cnt_contry[stud[i].country] >= 2){
			continue;
		}
		cnt_contry[stud[i].country]++;
		
		printf("%d %d",stud[i].country,stud[i].num);
		check++;
		if(check>=3){
			break;
		}
	}
}
