#include<stdio.h>

void main()
{
	char a[100],b[100],c[100];
	int i,n,m,j,l;
	
	printf("hello\nenter string=");
	gets(a);

	printf("\nenter string=");
	gets(b);
	
	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	n=i;

	l=0;
	while(b[l]!=0)
	{
		l++;
	}
	m=l;
		
	j=0;
	i=0;
	while(i<n)
	{
		c[j]=a[i];
		printf("%c",c[j]);
		j++;
		i++;
	}
	l=0;
	while(l<m)
	{
		c[j]=b[l];
		printf("%c",c[j]);
		l++;
		j++;
	}
	
	
	
	getch();
	
}
