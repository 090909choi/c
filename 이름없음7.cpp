#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i,j,a,b;
	srand(time(NULL));
	scanf("%d",&a);
	b=0;
	
	for(i = 0; i<6; i++)
	{
		for(j=0;j<6;j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	
	i = 0;
	while(i<6)
	{
		j = 0;
		while(j<6)
		{
			printf("%3d",ar[i][j]);
			
			if(ar[i][j] == a)
			{
				b+=1;
			
			}
			j++;
		}
		printf("\n");
		i++;
	}
	printf("%d",b); 
	if(b>=1)
	{
		printf("있음 ");
	}
	else
	{
		printf("없음 ");
	}
	return 0;
}
