#include <stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int x,y;
	COORD pos = {1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("<-:커서 시작위치(%d %d)",pos.X,pos.Y);
	getch();
	
	pos.X = 10;
	pos.Y = 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("<-:커서 시작위치(%d %d)",pos.X,pos.Y);
	getch();
	
	pos.X = 20;
	pos.Y = 5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("<-:커서 시작위치(%d %d)",pos.X,pos.Y);
	getch();
	
	pos.X = 40;
	pos.Y = 12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("<-:커서 시작위치(%d %d)",pos.X,pos.Y);
	getch();
	
	pos.X = 40;
	pos.Y = 24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("<-:커서 시작위치(%d %d)",pos.X,pos.Y);
	getch();
	
	return 0;
}
