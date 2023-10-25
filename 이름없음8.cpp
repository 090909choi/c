#include<stdio.h>

int  main()
{
	int a;
	
	scanf("%d",&a);
	
	if(a<=190)
	{
		printf("고속정,참수리급");
	}
	else if(190<a && a<=285)
	{
		printf("고속정,검은 독수리급 ");
	}
	else if(285<a && a<=720)
	{
		printf("고속정,윤영하급 ");
	}
	else if(720<a && a<=1100)
	{
		printf("초계함,동해급 ");
	}
	else if(1100<a && a<=1350)
	{
		printf("초계함,포항급 ");
	}
	else if(1350<a && a<=1900) 
	{
		printf("호위함,울산급 ");
	}
	else if(1900<a && a<=2550)
	{
		printf("호위함,대구급 ");
	}
	else if(2550<a && a<=3000)
	{
		printf("호위함,인천급 ");
	}
	else if(3000<a && a<=3850)
	{
		printf("구축함,광계토 대왕급 ");
	}
	else if(3850<a && a<=5050)
	{
		printf("구축함,충무공 이순신급  ");
	}
	else if(5050<a)
	{
		printf("세종대왕급");
	}
	return 0;
}
