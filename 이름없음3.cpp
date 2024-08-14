#include<stdio.h>

int main(){
	int n,c,a,al = 0,q[1000],count = 0;
	float p;
	scanf("%d",&c);
	for(int i = 0;i<c;i++){
		scanf("%d",&n);
		for(int j = 0;j<n;j++){
			scanf("%d",&a);
			al += a;
			q[j] = a;
		}
		p = (double)al/n;
		for(int x = 0;x<n;x++){
			if(p<q[x]){
				count++;
			}
		}
		printf("%.3f%%\n",(double)(count*100)/n);
		count = 0;
		al = 0;
	}
	return 0;
}
