//#include<stdio.h>
//
//int plus()
//{
//	int a = 3;
//	int b = 2;
//	
//	printf("%d",a + b);
//	return 0;
//}
//
//int main()
//{
//	plus();
//}
#include<stdio.h>

int plus(int num1, int num2)
{
	printf("%d\n",num1 + num2);
	return 0;
}

int main()
{
	int a = 3;
	int b = 2;
	
	plus(a,b);
	plus(5,3);
}
