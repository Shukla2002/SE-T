#include<stdio.h>
main()
{
	int cprice,sprice;
	
	printf("Enter Cost Price : ");
	scanf("%d",&cprice);
	printf("\nEnter Sell Price : ");
	scanf("%d",&sprice);
	
	
	if(sprice>cprice)
	{
		printf("\nYou made profit!!");	
	}
	else
	{
		printf("\nYou made loss!!");
	}
}