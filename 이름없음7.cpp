#include<stdio.h>

int main()
{
	char str1[15],str2[15];
	
	scanf("%s",&str1);
	printf("str1 = %s\n",str1);
	scanf("%s%s",&str1,&str2);
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	
	return 0;
}
