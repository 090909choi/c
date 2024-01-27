#include<stdio.h>

int main()
{
	char c;
	
	while(1)
	{
		c = getchar();
		if(c == 10)
		{
			break;
		}
	}  
	return 0;
}
