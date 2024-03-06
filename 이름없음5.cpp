#include<stdio.h>

int main()
{
	int a,b,c,d;
	char e,f,g;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a+b+c+d==0){
		e = 'D';
	}
	else if(a+b+c+d==1){
		e = 'c';
	}
	else if(a+b+c+d==2){
		e = 'B';
	}
	else if(a+b+c+d==3){
		e = 'A';
	}
	else if(a+b+c+d==4){
		e = 'E';
	}
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a+b+c+d==0){
		f = 'D';
	}
	else if(a+b+c+d==1){
		f = 'c';
	}
	else if(a+b+c+d==2){
		f = 'B';
	}
	else if(a+b+c+d==3){
		f = 'A';
	}
	else if(a+b+c+d==4){
		f = 'E';
	}
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a+b+c+d==0){
		g = 'D';
	}
	else if(a+b+c+d==1){
		g = 'c';
	}
	else if(a+b+c+d==2){
		g = 'B';
	}
	else if(a+b+c+d==3){
		g = 'A';
	}
	else if(a+b+c+d==4){
		g = 'E';
	}
	printf("%c\n%c\n%c\n",e,f,g);
}
