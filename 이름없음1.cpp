#include<stdio.h>

int main()
{
	int i,j,m,n ;
	scanf("%d %d",&m,&n);
	for(i = m;i<n;i++){
		for(j = 2;j<i;j++){
			if(i%j==0){
				break;
			}
			if(i-1==j)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
