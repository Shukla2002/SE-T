#include<stdio.h>

void main()
{
	
	int n,sum=0;
	/*
		Enter Number from user
	*/
	printf("Enter Postive Numbers : ");
	scanf("%d",&n);
		
	while(n!=0)
	{
		
		
		/*find last number and add in sum*/
		sum+=n%10;
		
		/*remove last value from digits */
		n = n/10;
		
	}
	
	printf("Summation of given Number is : %d",sum);	
}