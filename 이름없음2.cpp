#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x,int y);
void Move_UpDown_Key(char key,int *x,int *y);

int main()
{
	char key;
	int x = 40,y = 0;
	
	do
	{
		system("cls");
		GotoXY(x,y);
		printf("¢Ã");
		key = getch(); 
		Move_UpDown_Key(key,&x,&y);
		y = y + 1;
	}while(key != 27);
	return 0;
}

void GotoXY(int x,int y)
{
	COORD Pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void Move_UpDown_Key(char key,int *x,int *y)
{
	switch(key)
	{
		case 75:
			*x = *x - 2;
			GotoXY(*x,*y);
			printf("¡ç");
			*x = *x + 2;
			GotoXY(*x,*y);
			*x = *x - 1;
			if(*x<1)*x = X_END;
			break;
		case 77:
			printf("¡æ");
			*x = *x + 1;
			if(*x>X_END)*x = X_END;
			break;
	}
}
