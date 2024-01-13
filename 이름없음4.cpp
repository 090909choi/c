#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("NumberFile.txt","r");
	int n,m;
	double d1,d2;
	 
	if(in == NULL)
	{
		printf("파일이 없습니다.\n");
		exit(1);
	}
	
	printf("정수를 두 개 입력합니다:");
	fscanf(in,"%d %d",&n,&m);
	printf("실수를 입력합니다:");
	fscanf(in,"%lf %lf",&d1,&d2);
	
	printf("\n\n\n입력 받은 수들을 모두 출력합니다.\n");
	printf("%d %d\n",n,m);
	printf("%lf %lf\n",d1,d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("어디서 입력 받았을까요?");

	fclose(in);
	
	return 0;
}
