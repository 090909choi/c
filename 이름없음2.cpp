#include<stdio.h>
#include<string.h>

int main()
{	
	int count,len;
	char a[80];
	gets(a);
	len = strlen(a);
	count=0;
	for(int i = 0;i<=len;i++){
		count++;
		if(a[i]==' '){
			count--;
		}
	}
	printf("%d",count-1);
	return 0;
}
