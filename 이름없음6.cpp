#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int i,a,b;
	char c;
	scanf("%d %d",&a,&b);
	COORD pos;
	pos.X = a;
	pos.Y = b;
	
	for(i = 0;i<10;i++){
		scanf("%c",&c);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",c);
		pos.X = pos.X - 1;
	}
}
