#include<stdio.h>

int main()
{
	int ar[5][5];
	int i,j,a;
	a=1;
	
	for(i = 0;i<5;i++){
		ar[0][i] = a;
		a++;
	}
	a--;
	for(i = 0;i<5;i++){
		ar[i][4] = a;
		a++;
	}
	a--;
	for(i = 4;i>=0;i--){
		ar[4][i] = a;
		a++;
	}
	a--;
	for(i = 4;i>=1;i--){
		ar[i][0] = a;
		a++;
	}
	a--;
	for(i = 0;i<4;i++){
		ar[1][i] = a;
		a++;
	}
	a--;
	for(i = 1;i<4;i++){
		ar[i][3] = a;
		a++;
	}
	a--;
	for(i = 3;i>=1;i--){
		ar[3][i] = a;
		a++;
	}
	a--;
	for(i = 3;i>=2;i--){
		ar[i][1] = a;
		a++;
	}
	a--;
	for(i = 1;i<3;i++){
		ar[2][i] = a;
		a++;
	}
	a--;
	for(i = 0; i <5;i++){
		for(j = 0; j < 5;j++){
			printf("%3d",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
