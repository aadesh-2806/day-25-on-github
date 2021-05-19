#include<stdio.h>

int min(int  ,int );
void main()
{
	int a,b,m;
	
	printf("hello\nenter no.=");
	scanf("%d%d",&a,&b);
	m=min(a,b);
	printf("%d",m);
	
	getch();
													//min
}

int min(int x,int y)
{
	int m;
	if(x<y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	
	return m;
}
