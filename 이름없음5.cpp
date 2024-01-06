#include<stdio.h>
#include<string.h>

struct Address {
	char name[10];
	char phon[20];
	char home[50];
};

int main()
{
	struct Address man1;
	
	strcpy(man1.name,"김병학");
	strcpy(man1.phon,"123-4567-8910");
	strcpy(man1.home,"씨큐브코딩");
	
	printf("man1의 이름 : %s\nman1의 번호 : %s\nman1의 집: %s ",man1.name,man1.phon,man1.home);
	
	return 0;
}
