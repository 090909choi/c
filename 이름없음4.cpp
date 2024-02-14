#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	COORD pos;
	int q = 999;
	pos.X = 40;
	pos.Y = 10;
	
	for(int i = 0;i<10;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",q);
		q-=111;
		pos.Y = pos.Y + 1;
		Sleep(1000);
	}
}
