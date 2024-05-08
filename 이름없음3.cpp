#include<stdio.h>

int main()
{
	int a,b,c,out = 0,i = 1;
	while(1)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a == 0 && b == 0 && c == 0)
		{
			break;
		}
		out += (c/b)*a;
		out += c%b;
		printf("case%d : %d",i,out);
		i++;
		out = 0;
	}
}
