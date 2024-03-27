#include<stdio.h>

int main()
{
	int a[10],b[10],aw = 0,bw = 0;
	char p;
	
	for(int i = 0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for(int i = 0;i<10;i++){
		if(a[i] == b[i]){
			aw += 1;
			bw += 1;
			p = 'D';
		}
		if(a[i] > b[i]){
			aw += 3;
			p = 'A';
		}
		if(a[i] < b[i]){
			bw += 3;
			p = 'B';
		}
	}
	printf("%d %d",aw,bw);
	printf("%c",p);
	return 0;
}
