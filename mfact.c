#include<stdio.h>

void main()
{
	
	int i,a[100],b[100],n,t,j,r;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);						//mfact.c
		scanf("%d",&a[i]);
		i++;
	}
	
	i=0;
	while(i<n-1)
	{
		j=2;
		r=0;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				r++;
			}
			j++;
		}
		b[i]=r;
		i++;
	}
	
	i=0;
	while(i<n)
	{
		j=i+1;
		while(j<n-1)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
				
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			j++;
		}
		i++;
	}
	
	i=0;
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
	
	getch();
	
}	
