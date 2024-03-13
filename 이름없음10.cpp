#include<stdio.h>

int main()
{
	int Na,D,count,B;
	count = 0;
	for(int i = 0;i<4;i++){
		scanf("%d %d",&Na,&D);
		count = count + D - Na;
		if(B<count)
		{
			B = count;
		}
	}
	printf("%d ",B);
	return 0;
}
