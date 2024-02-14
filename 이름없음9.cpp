#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	COORD pos;
	char ar[9] = {'A','B','C','D','E','F','G','H','I'};
	char n;
	scanf("%c",&n);
	pos.X = 40;
	pos.Y = 12;
	for(int i = 0;i<9;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%c",ar[i]);
		if(n == 'R')
		{
			pos.X+=1;
		}
		if(n == 'L')
		{
			pos.X-=1;
		}
		if(n == 'U')
		{
			pos.Y-=1;
		}
		if(n == 'D')
		{
			pos.Y+=1;
		}
		Sleep(1000);
	}
}
