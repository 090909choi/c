#include<stdio.h>

int main()
{
	char sentence[80];
	
	puts("단어를  입력하세요 :");
	gets(sentence);
	for(int i = 0; i<=sentence[i];i++){
		sentence[i] = sentence[i]-32;
	}
	puts(sentence);
	return 0;
}
