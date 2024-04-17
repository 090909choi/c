#include<stdio.h>

int main(){
	char str[1000];
	int sum = 1,count[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
	scanf("%s",&str);
	for(int i = 0;str[i];i++){
		str[i] = str[i] - 'a';
		count[str[i]] += sum;
		sum++;
	}
	for(int i = 0;i<26;i++){
		printf("%d ",count[i]);
	}
	return 0;
}
