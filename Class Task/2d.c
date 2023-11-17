#include<stdio.h>

main()
{
	int i,j;
	int a[3][3];
	int b[3][3];
	
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{		
			printf("\nEnter Elemts of A : ");
			scanf("%d",&a[i][j]);
			printf("\nElements of A : a[%d]",a[i][j]);
		}	
		
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{		
			printf("\nEnter Elemts of B : ");
			scanf("%d",&b[i][j]);
			
			printf("\nElements of B : b[%d]",b[i][j]);
		}	
		
		
	}
	
}