#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int res;
	
	srand(time(NULL));
	printf("%d\n",rand());
	res = rand();
	printf("%d" ,res);
	return 0;
}
