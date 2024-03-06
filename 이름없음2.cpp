#include<stdio.h>

int main()
{
	int a,b,c,d;
	int q,w,e;
	q = 0;
	w = 0;
	e = 0;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&d);
	if(d>60 && d<3600)
	{
		e = d%60;
		w = d/60;
	}
	else if(d>3600)
	{
		e = d%60;
		printf("%d\n",e);
		d /= 60;
		w = d%60;
		d /= 60;
		q = d%60;
	}
	else if(d<60)
	{
		e = d;
	}
	a = a - q;
	b = b-w;
	c = c-e;
	if(b < 0)
	{
		a = a - 1;
		b = b + 60;
	}
	if(c < 0)
	{
		b = b - 1;
		c = c + 60;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
