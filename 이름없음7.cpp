#include <stdio.h>
#include<conio.h>
#include<windows.h>

void GotoXY(int x,int y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	COORD pos;
	
	do
	{
		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		printf("ÁÂÇ¥ :");
		scanf("%d%d",&pos.X,&pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%s","¢½");
		
		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("				");
	}while(1);
	
	return 0;
}
