#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp = fopen("Charout.txt","w");
	 
	if(fp == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	fputc('A',fp);
	fputc('B',fp);
	fputc('\n',fp);
	fputc(97,fp);
	fputc(98,fp);
	
	fclose(fp);
	
	return 0;
}
