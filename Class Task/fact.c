#include<stdio.h>

main()
{
	int n,i;
	int fact=1;
	
	printf("Enter Number to find factorial : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
		
	}
	printf("\nFactorial of %d is : %d",n,fact);	
}