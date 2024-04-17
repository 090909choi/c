#include<stdio.h>

int main(){
	char str[1000];
	int count[26] = {0,};
	scanf("%s",str);
	for(int i = 0;str[i];i++){
		if('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		count[str[i]-'A']++;
	}
	for(int i = 0;i<26;i++){
		printf("%d ",count[i]);
	}
	return 0;
}
