#include<stdio.h>	
#include<string.h>

struct Person{
	char name[10];
	double sung;
	int siu;
};

int main()
{
	struct Person list[8] = {{"����",15.5,5},
							{"����",15.4,4},
							{"����",13.7,1},
							{"�ͽŰ�",16.5,6},
							{"������",14.9,8},	
							{"��ũ��",15.1,3},
							{"������",17.5,7},
							{"�̻���",13.9,2}};
							
	for(int i = 1;i<9;i++){
		for(int j = 0;j<8;j++){
			if(list[j].siu==i){
			printf("�̸� : %s ���� : %.1lf ���� : %d\n",list[j].name,list[j].sung,list[j].siu);
		}
		}
	}
	return 0;
}
