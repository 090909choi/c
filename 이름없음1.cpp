#include<stdio.h>
using namespace std;

int gcd(int x,int y){
	if(y==0){
		return x;
	}
	else{
		return gcd(y,x%y);
	}
}

int main(){
	int a,b;
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d %d",&a,&b);
		int g = gcd(a,b);
		printf("%d",a*b/g);
	}
	return 0;
}
