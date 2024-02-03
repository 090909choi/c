#include <stdio.h>
#include<conio.h>
#include<windows.h>

void GotoXY(int x,int y);

int main()
{
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int x,y;
	int i = 0;
	GotoXY(40,0);
	while(i<10)
	{
		printf("%d\n                                        ",ar[i]);
		Sleep(1000);
		i++;
	}
	return 0;
}

void GotoXY(int x,int y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

