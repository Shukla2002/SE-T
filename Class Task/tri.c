#include<stdio.h>

main()
{
	int i,j,k;
	int n=5;
	
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	
}