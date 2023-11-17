#include<stdio.h>

main()
{
	int i,j;
	int a[2][2];
	int b[2][2];
	int c;
	
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
		
			printf("\nEnter Elements A : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}	
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
		
			printf("\nEnter Elements B : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}	
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
		
			printf("\nAddition : %d",a[i][j]+b[i][j]);
		}	
	}
}