#include<stdio.h>
#include<math.h>

void main()
{
	
	int i,a[100],s,n,t,c,r;
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	c=n/2;
	
	for(i=0;i<n;i++)
	{
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(s=i+1;s<n;s++)
		{
			if(a[i]>a[s])
			{
				t=a[i];
				a[i]=a[s];
				a[s]=t;
			}
		}
	}
	t=0;
	r=0;
	
	if(n%2==0)
	{
		s=c;
		for(i=0;i<n;i+=2)
		{
			t=a[i]*pow(10,c-1)+t;
			c--;
		}
		for(i=1;i<n;i+=2)
		{
			r=a[i]*pow(10,s-1)+r;
			s--;
		}
	}
	else
	{
		s=c;
		for(i=0;i<n;i+=2)
		{
			t=a[i]*pow(10,c)+t;
			c--;
		}
		for(i=1;i<n;i+=2)
		{
			r=a[i]*pow(10,s-1)+r;
			s--;
		}
	}
	printf("%d",r+t);
	getch();
	
}	
