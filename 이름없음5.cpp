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
	
	strcpy(man1.name,"�躴��");
	strcpy(man1.phon,"123-4567-8910");
	strcpy(man1.home,"��ť���ڵ�");
	
	printf("man1�� �̸� : %s\nman1�� ��ȣ : %s\nman1�� ��: %s ",man1.name,man1.phon,man1.home);
	
	return 0;
}
