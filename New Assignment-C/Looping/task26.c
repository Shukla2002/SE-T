#include<stdio.h>
main()
{
	/* declare data type and variable*/
	int n,sum=0,i;
	
	/*Enter Number from user*/
	printf("Enter Number : ");
	scanf("%d",&n);
	
	/* for loop for numbers*/
	
	for(i=1;i<=n;i++)
	{
		/* logic to get sum*/
		sum += i+i;
	}
	/* print the sum */
	printf("\nSum : %d",sum);
}