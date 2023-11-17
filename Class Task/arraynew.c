#include<stdio.h>

main()
{
	int a[5],i;
	
	for(i=1;i<=5;i++)
	{
	
		printf("Enter Elements : ");
		scanf("%d",&a[i]);	
	}	
	for(i=1;i<=5;i++)
	{
	
		printf("\nElements are :%d",a[i]);
	}	
	
}