#include<stdio.h>
main()
{
	float sal,gsal;
	float ins = (sal*10)/100;
	float loan = (sal*10/100); 	
	
	printf("Enter Monthly Salary : ");
	scanf("%f",sal);
	
	gsal = sal-ins-loan;
	
	printf("\nAfter Deduction Your Salary is : %f",gsal);
	
}