#include<stdio.h>

int main(){
	char str[1000];
	int n;
	scanf("%d %s",&n,str);
	for(int i = 0;str[i];i++){
		str[i] = str[i] + n;
		printf("%c",str[i]);
	}
	return 0;
}
