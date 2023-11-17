#include<stdio.h>

void main()

{
	int row,col;
	int n=1;
	
	for(row=1;row<=5;row++)
	{
		
		for(col=1;col<=row;col++)
		{
			printf("%d", n);
			n+=1;	
		}
		
		
		printf("\n");
	}

}