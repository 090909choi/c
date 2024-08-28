#include<stdio.h>
#include<string.h> 

int main()
{
	int a,b;
	char s[10001];
	scanf("%d",&a);
	int check = 0;
	for(int i = 0;i<a;i++){
		scanf("%s",s);
		int len = strlen(s);
		for(int j = 0;j<len/2;j++){
		if(s[j] == s[len-1-j]){
			b = 1;
		}
		else
		{
			b = 0;
		}
	}
	if(b == 1)
		{
			check += 1;
		}
	}
	printf("%d",check);
	return 0;
}
