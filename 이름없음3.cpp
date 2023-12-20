#include<stdio.h>
int AddNum(int, int);
int SubNum(int*, int*);
int MulNum(int*,int*);
int DivNum(int,int);

int main()
{
	int a,b;
	int* pa = &a;
	int* pb = &b;
	
	printf("정수 입력 :");
	scanf("%d %d",&a,&b);
	
	AddNum(a,b);
	SubNum(&a,&b);
	MulNum(pa,pb);
	DivNum(*pa,*pb);
	
	return 0;
}

int AddNum(int a,int b)
{
	printf("%d\n",a+b);
}
int SubNum(int* a,int* b)
{
	printf("%d\n",*a-*b);
}
int MulNum(int* pa,int* pb)
{
	printf("%d\n",(*pa)*(*pb));
}
int DivNum(int pa,int pb)
{
	printf("%d\n",(pa/pb));
}

