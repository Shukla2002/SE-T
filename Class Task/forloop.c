#include<stdio.h>

void main()

{
	int n,i;
	int sum=0,sumf=0;
	
	for (i=1;i<=10;i++)
	
	{
	printf("\nEnter 10 Numbers : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number is Even");
		sum += n;
	}
	
	else
	{
		printf("Number is odd");
		sumf += n;
	}
	
	}	
	
	printf("Sum of even number is : %d",sum);
	printf("Sum of odd number is : %d",sumf);
}