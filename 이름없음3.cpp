#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i,j,a;
	srand(time(NULL));
	
	for(i = 0; i<6; i++)
	{
		for(j=0;j<6;j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	scanf("%d",&a);

	i = 0;
	while(i<6)
	{
		j = 0;
		while(j<6)
		{
			printf("%d  ",ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
	while(i<6)
	{
		j = 0;
		while(j<6)
		{
			if(ar[i][j] == a)
			{
				printf("За:%d ї­:%d",i,j);
			}
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
