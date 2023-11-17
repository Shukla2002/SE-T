#include<stdio.h>

void main()
{
	int n,large=0;
	int rem=0;
	
	printf("Enter Positive integers : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem = n%10;
		if(rem>large)
		{
			large = rem;
		}
		n = n/10;			
    }
	printf("Largest Number of digit is : %d",large);	
}