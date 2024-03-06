#include<stdio.h>

int main()
{
	int I;
	long long L;
	double D;
	char C;
	char S[80];
	
	scanf("%c %d %d %lf %s",&C,&I,&L,&D,&S);
	printf("%s %lf %d %d %c",S,D,L,I,C);
	return 0;
}
