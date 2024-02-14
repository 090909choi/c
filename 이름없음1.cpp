#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	COORD pos;
	int q = 10;
	pos.X = 20;
	pos.Y = 4;
	
	for(int i = 0;i<10;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",q);
		q+=10;
		pos.X = pos.X + 2;
		Sleep(1000);
	}
}
