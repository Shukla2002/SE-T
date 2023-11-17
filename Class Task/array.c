#include<stdio.h>
main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
	}
}