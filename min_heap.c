#include<stdio.h>

void main()
{
	int i,a[50],s,t,n,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value %d=",i+1);
		scanf("%d",&a[i]);
	}
	
	if(a[0]<a[1])
	{
		for(i=1;i<n-1;i++)
		{
			if(a[i]>=a[i-1] && a[i]>=a[i+1])
			{
				break;
			}
		}
	}
	if(i==n-1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	getch();
}
