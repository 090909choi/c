#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("NumberFile.txt","r");
	char n[80];
	if(in == NULL)
	{
		printf("파일없음.");
		exit(1); 
	}
	fprintf(in,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	fgets(n,sizeof(n),in);
	puts(n);
	
	fclose(in);
	
	return 0;
}
