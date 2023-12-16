#include<stdio.h>
#include<string.h>

int main()
{
	char word[15];
	gets(word);
	int len;
	
	len = strlen(word);
	for(int i = len;i>=0;i--)
	{
		printf("%c",word[i]);
	}
	return 0;
}

