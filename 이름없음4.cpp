#include<stdio.h>	
#include<string.h>

struct Person{
	char name[10];
	double sung;
	int siu;
};

int main()
{
	struct Person list[8] = {{"돌고래",15.5,5},
							{"범고래",15.4,4},
							{"상괭이",13.7,1},
							{"귀신고래",16.5,6},
							{"수염고래",14.9,8},	
							{"밍크고래",15.1,3},
							{"향유고래",17.5,7},
							{"이빨고래",13.9,2}};
							
	for(int i = 1;i<9;i++){
		for(int j = 0;j<8;j++){
			if(list[j].siu==i){
			printf("이름 : %s 성적 : %.1lf 순위 : %d\n",list[j].name,list[j].sung,list[j].siu);
		}
		}
	}
	return 0;
}
