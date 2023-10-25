#include<stdio.h>

int  main()
{
	int a;
	
	scanf("%d",&a);
	
	if(a<=11)
	{
		printf("기상현상");
	}
	else if(11<a && a<=50)
	{
		printf("오존층");
	}
	else if(50<a && a<=80)
	{
		printf("유성관찰");
	}
	else if(80<a && a<=1000)
	{
		printf("오로라,인공위성의 궤도");
	}
	else if(a>1000)
	{
		printf("우주");
	}
	return 0;
}
