#include<stdio.h>

main()
{
	int i;
	int a[5];
	int b[5];
	int c;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter Elements A : ");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\nEnter Elements B : ");
		scanf("%d",&b[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\nAddition : %d",a[i]+b[i]);
	}
	
	
}