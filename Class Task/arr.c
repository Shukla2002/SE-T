#include<stdio.h>

main ()
{
	int i,a[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Elements are : ",a[i]);
	}
}