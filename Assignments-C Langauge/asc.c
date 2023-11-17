#include<stdio.h>

main()
{
	int i,j,arr[20],limit,a;
	
	printf("Enter Array size : ");
	scanf("%d",&limit);
	
	for(i=0;i<limit;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			if(arr[i]>arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
			
			
		}
	}
	printf("The descending order !!!");
	for(i=0;i<limit;i++)
	{
		printf("\n%d\n",arr[i]);
	}
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			if(arr[i]<arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
			
			
		}
	}
	printf("The ascending order !!!");
	for(i=0;i<limit;i++)
	{
		printf("\n%d\n",arr[i]);
	}
}