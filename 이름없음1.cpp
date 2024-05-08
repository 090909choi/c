#include<stdio.h>
#include<string.h>

int main()
{
	char a[10000],b[10000];
	scanf("%s %s",a,b);
	if(strlen(a) > strlen(b))
	{
		printf("sir");
	}
	else if(strlen(a) < strlen(b))
	{
		printf("kid");
	}
	else if(strlen(a) == strlen(b))
	{
		for(int i = 0;i<strlen(a);i++){
			if(a[i] < b[i])
			{
				printf("kid");
				break;
			}
			else if(a[i] > b[i])
			{
				printf("sir");
				break;
			}
		}
	}
	return 0;
}
