#include<stdio.h>
#include<string.h> 

int main()
{
	char a[1000];
	scanf("%s",a);
	int check = 0;
	int len = strlen(a);
	for(int i = 0;i<len/2;i++){
		if(a[i] != a[len-1-i]){
			check = 1;
			break;
		}
		
	}
	if(check == 0){
		printf(" Yes ");
	}
	else{
		printf(" N0 ");
	}
}
