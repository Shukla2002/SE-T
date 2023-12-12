#include<stdio.h>
main()
{
	int n,sum,i;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		sum = n*n;
	}
	printf("\nMultiplication : %d",sum);
}