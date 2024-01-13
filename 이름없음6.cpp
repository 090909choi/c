#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	e =0;
	d =0;
	if(c<60)
	{
		d = b+c;
		e = a;
	}
	else
	{
		e = c/60 + a;
		d = c%60 + b;
	}
	if(d>=60)
	{
		d = d-60;
		e += 1;
	}
	if(e>23)
	{
		e -= 24;
	}
	printf("%d½Ã %dºÐ ",e,d);
	return 0;
}
