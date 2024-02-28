#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int key;
	int x = 40,y = 0;
	int arr[79][24];
	for(int i = 0;i<24;i++){
			for(int j = 0;j<79;j++){
				arr[j][i] = 0;
			}
		}
	
	do
	{
		system("cls");
		arr[x][y] = 1;
		for(int i = 0;i<24;i++){
			for(int j = 0;j<79;j++){
				if(arr[j][i] == 0)
				{
					printf(" ");
				}
				else
				{
					printf("бс");
				}
			}
			printf("\n");
		}
		arr[x][y] = 0;
		key = getch(); 
		key = getch(); 
		switch(key)
		{
			case 75:
				x = x - 2;
			case 77:
				x = x + 1;
	}
		y = y + 1;
		if(arr[x][y-1] == 1 || y == 24)
		{
			arr[x][y] = 1;
		}
	}while(key != 27);
	return 0;
}
