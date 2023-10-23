#include<stdio.h>
void main()
{
	int row,col;
	
	for(row=1;row<10;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("*");
		}
	printf("\n");
	}
	
	for(row=1;row<10;row++)
	{
		for(col=10;col>=row;col--)
		{
			printf("*");
		}
	printf("\n");
}
}