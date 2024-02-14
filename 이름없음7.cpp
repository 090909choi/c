#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	int i,a,b,d;
	char c;
	scanf("%d %d",&a,&b);
	COORD pos;
	pos.X = a;
	pos.Y = b;
	
	scanf("%d",&d);
	scanf("%c",&c);
	for(i = 0;i<d;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%c",c);
		pos.X = pos.X + 1;
		Sleep(1000);
	}
}
