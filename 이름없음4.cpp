#include<stdio.h>
#include<string.h>

struct Person{
	char name[10];
	int age;
	double height;
};

int main()
{
	struct Person m1;
	struct Person m2 = {"Çã³­¼³Çå",13,159.9};
	struct Person m3;
	
	scanf("%s %d %lf",&m3.name,&m3.age,&m3.height);
	
	strcpy(m1.name,"Çã±Õ");
	m1.age = 19;
	m1.height = 168.34;
	printf("%s %d %lf\n",m1.name,m1.age,m1.height);
	printf("%s %d %lf\n",m2.name,m2.age,m2.height);
	printf("%s %d %lf",m3.name,m3.age,m3.height);
	
	return 0; 
	
}
