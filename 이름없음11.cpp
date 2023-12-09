#include<stdio.h>

int main()
{
	char sentence;
	int count;	
	puts("단어를 입력하세요 :");
	gets(sentence);
	for(int i = 1; i<=sentence[i]; i++)
	{
		count++;
	}
	int i = sentence[count];
	while(i>=0){
		printf("%c",sentence[i]);
		i--;
	}
	return 0;
}
