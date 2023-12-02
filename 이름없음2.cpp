#include<stdio.h>

int main()
{
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int br[10];
	for(int i = 0; i<=9; i++){
		br[i]=ar[i];
		printf("%d   %d\n",ar[i],br[i]);
	}
	return 0;
}
