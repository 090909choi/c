#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d�� %d�� %d��",a,b,c);
	scanf("%d",&d);
	if(d>60)
	{
		if(d>3600)
		{
			a = a - d/3600;
			h = h - d%3600;
			b = h/60;
			c = h%60;
			
		}
		else
		{
			b = b - b/60;
			c = h - b%60;
		}
	}
	else
	{
		c = c-d;
	}
	printf("���ư� �ð�: %d�� %d�� %d��",a,b,c);
	return 0; 
}
