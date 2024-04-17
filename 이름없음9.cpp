#include<stdio.h>

int main()
{
	int l,d,sum = 0;
	char s[10000],s2[10000];
	scanf("%d %d",&l,&d);
	scanf("%s",s);
	for(int i = 0;s[i]-1;i++){
		if(d>l-1)
		{
			s2[d-l] = s[i+1];
		}
		else
		{
			s2[d] = s[i+1];
		}
		d *= 2;
	}
	s2[0] = s[0];
	printf("%s",s2);
	return 0;
}
