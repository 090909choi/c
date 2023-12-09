#include<stdio.h>

int main()
{
	char str1[25] = "C language is powerful";
	char str2[] = "Coding is computer programming";
	
	for(int i = 0; i<=25; i++)
	{
		printf("%c",str1[i]);
	}
	int z = 0;
	while(str2[z]){
		printf("%c",str2[z]);
		z++;
	}
	return 0;
}
