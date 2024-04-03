#include<stdio.h>

int main()
{
	int n,t,k,ar[100][100],tx,ty,kx,ky;
	scanf("%d",&n);
	scanf("%d %d",&t,&k);
	for(int i = 0;i<t;i++){
		scanf("%d %d",&tx,&ty);
		ar[ty][tx] = -1;
	}
	for(int i = 0;i<k;i++){
		scanf("%d %d",&kx,&ky);
		if(ar[ky][kx] == -1)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
