#include<stdio.h>

main()
{
	int a[20][20];
	int b[20][20];
	int c[20][20];
	int row,col,i,j;
	
	
	printf("Enter rows : ");
	scanf("%d",&row);
	printf("Enter coloums : ");
	scanf("%d",&col);
	
	printf("\n Enter 1 Matrix : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter Elements %d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter 2 Matrix : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter Elements %d : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nAddition : %d",a[i][j]+b[i][j]);
			printf("\nSubstraction : %d",a[i][j]-b[i][j]);
			printf("\nMultiplication : %d",a[i][j]*b[i][j]);
		}
	}
}