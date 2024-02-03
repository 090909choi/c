#include <stdio.h>
#include<conio.h>
#include<windows.h>

void GotoXY(int x,int y);

int main()
{
	int i;
	int j;
	
	do
	{
		GotoXY(0,0);
		printf("%d",i);
		Sleep(1000);
		i++;
	}while(1);
	return 0;
}

void GotoXY(int x,int y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

