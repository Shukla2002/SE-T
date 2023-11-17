#include<stdio.h>

void main()
{
	int n,firstdigit,lastdigit;
	int sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	/*to find the last digit from number*/
	lastdigit = n%10;
	
	/*copy number to first digit*/
	firstdigit = n;
	
	while(n>=10)
	{
		
		n=n/10;
		
	}
	firstdigit = n;
	
	sum = firstdigit+lastdigit;
	
	printf("The summation of first and last digit is : %d",sum);
}