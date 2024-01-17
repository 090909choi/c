#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("File.txt","w");
	int n,sum,a;
	int j;
	if(in == NULL)
	{
		printf("파일없음.");
		exit(1); 
	}
	scanf("%d",&n);
	fprintf(in,"%d의 약수 :",n);
//	for(j = 0;j<=n;j++){
//		if(n%j==0)
//		{
//			sum+=1;
//			fprintf(in,"%d",j);
//			a+=j;
//		}
//	}	
//	fprintf(in,"\n약수의 개수 : %d",sum);
//	fprintf(in,"\n약수의 합 : %d",a);
	
	fclose(in);
	
	return 0;
}
