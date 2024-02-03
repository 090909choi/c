#include<stdio.h>

int main()
{
	int n,i,a,j;
	int score[10000] = {0};
	int rank[10000];
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		scanf("%d",&a);
		score[i] = a;
	}
	for(i = 0;i<n;i++){
		
		rank[i] = 1;
		for(j = 0;j<n;j++){
			if(score[i]<score[j]){
				rank[i]++;
			}
		}
	}
	for(i = 0;i<n;i++){
		printf("%d  ",rank[i]);
	}
	return 0;
}
