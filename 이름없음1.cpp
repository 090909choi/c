#include <stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int x,y;
	COORD pos = {40,20};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("Hello C3coding");
	getch();
	
	return 0;
}
