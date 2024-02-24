#include<stdio.h>
#include<windows.h>

void GotoXY(int x,int y);

int main()
{
	int x = 0,y = 1,temp = 2,count = 0;
	
	while(count < 5)
	{
		x += temp;
		if(x>40)
		{
			temp = -2;
		}
		if(x<2)
		{
			temp = 2;
			count++;
		}
		system("cls");
		GotoXY(x,y);
		printf("бр");
		Sleep(50);
	}
	printf("\n");
 } 
 
 void GotoXY(int x,int y)
 {
 	COORD Pos =  {x - 1,y - 1};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
 }
