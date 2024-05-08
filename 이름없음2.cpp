#include<stdio.h>

int main()
{
	int n,m;
	char c;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d %c",&m,&c);
		if(i == n-1)
		{
			scanf("%d",&n);
			if('a' <= c && c <= 'z')
			{
				if(m -c+'a'-1 < 1)
				{
					printf("1");
				}
				else
				{
					printf("%d",m -c+'a'-1);
				}
				break;
			}
			else
			{
				if(m + c-'A'+1 > 50)
				{
					printf("50");
				}
				else
				{
					printf("%d",m + c-'A'+1);
				}
				break;
			}
		}
		
	}
	return 0;
}
