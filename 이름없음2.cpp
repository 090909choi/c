#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("File.txt","w");
	int n,sum,a;
	int j;
	if(in == NULL)
	{
		printf("���Ͼ���.");
		exit(1); 
	}
	scanf("%d",&n);
	fprintf(in,"%d�� ��� :",n);
//	for(j = 0;j<=n;j++){
//		if(n%j==0)
//		{
//			sum+=1;
//			fprintf(in,"%d",j);
//			a+=j;
//		}
//	}	
//	fprintf(in,"\n����� ���� : %d",sum);
//	fprintf(in,"\n����� �� : %d",a);
	
	fclose(in);
	
	return 0;
}
