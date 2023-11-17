#include<stdio.h>

void main()

{
	
	int n;
	int reverse = 0,remainder;
	
	printf("Enter Positive Numbers  : ");
	scanf("%d",&n);
	
	while(n !=0)
		{
			remainder = n%10;
			printf(" \n%d rem : ",remainder);
			reverse = reverse*10+remainder;
			printf("====>>> ");
			printf("\n %d reverse..",reverse);
			n/=10;
			
		}
	printf("\nReverse number of provided number : %d",reverse);
	
	
}