#include<stdio.h>

int main(){
	char c = 't';
	if('a' <= c&& c<='z'){
		c = c - 'a'+'A';
	}
	printf("%c",c);
	return 0;
}
