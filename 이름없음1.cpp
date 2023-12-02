#include<stdio.h>

int main()
{
	double height[4];
	int j = 2;
	
	height[0] = 145.7;
	height[1] = 156.3;
	height[j] = 147.89;
	j++;
	height[j] = 159.4;
	
	for(int i=0; i<=3;i++){
		printf("%.2f ",height[i]);
	}
	return 0;
}
