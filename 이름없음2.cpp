#include<stdio.h>
#include<conio.h>

int main()
{
	unsigned char ch;
	
	do
	{
		ch = getch();
		printf("%d %x : %c",ch,ch,ch);
		printf("\n");
	}while(ch != 13);
	
	return 0;
}
