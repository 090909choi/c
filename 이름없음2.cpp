#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	COORD pos;
	int q = 10;
	pos.X = 40;
	pos.Y = 0;
	
	for(int i = 0;i<10;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",q);
		q+=10;
		pos.Y = pos.Y + 1;
		Sleep(1000);
	}
}
