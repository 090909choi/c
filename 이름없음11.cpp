#include<stdio.h>

int main()
{
	char sentence;
	int count;	
	puts("�ܾ �Է��ϼ��� :");
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
