#include<stdio.h>

int main(){
	int w,h,p,q,t,a=1,b=1;
	
	scanf("%d %d",&w,&h);
	scanf("%d %d",&p,&q);
	scanf("%d",&t);
	for(int i = 0;i<t;i++){
		p+=a;
		q+=b;
		if(p=w){
			b*=-1;
		}
		if(q=h){
			a*=-1;
		}
		if(p=0){
			b*=-1;
		}
		if(q=0){
			a*=-1;
		}
	}
	printf("%d %d",p,q);
}
