#include<stdio.h>

int add(int* num1,int* num2)
{
	*num1 = *num1 + 10;
	*num2 = *num2 + 10;
}
int main()
{
	int number1 = 5;
	int number2 = 10;
	
	add(&number1,&number2);
	
	printf("number1 = %d\n",number1);
	printf("number2 = %d\n",number2);
	return 0;
}
