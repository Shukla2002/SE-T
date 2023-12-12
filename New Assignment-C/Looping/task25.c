#include<stdio.h>
main()
{
	int n,sum=0,i;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum += i*i;
	}
	printf("\nMultiplication : %d",sum);
}