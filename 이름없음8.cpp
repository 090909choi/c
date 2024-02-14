#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	COORD pos;
	int ar[10] = {0,1,2,3,4,5,6,7,8,9};
	char n;
	scanf("%c",&n);
	pos.X = 40;
	pos.Y = 12;
	for(int i = 0;i<10;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",ar[i]);
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
