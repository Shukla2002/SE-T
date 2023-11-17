#include<stdio.h>

void main()
{
	int a[5];
	int b[5];
	int i;
	int c[5];
	
	for(i=0;i<=5;i++)
	{
		printf("\n Enter Numbers of A a[%d] : ",i+1);
		scanf("%d",&a[i]);
		printf("\n Enter Numbers of B b[%d] : ",i+1);
		scanf("%d",&b[i]);
		
	}
	
	for(i=0;i<=5;i++)
	{
		printf("\n Addition of Arrays is :  %d",a[i]+b[i]);
	}
}