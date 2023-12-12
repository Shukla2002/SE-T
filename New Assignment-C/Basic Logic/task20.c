#include<stdio.h>
main()
{
	float sal;
	float ins = sal*0.10;
	float loan = sal*0.10;	
	float gsal = sal-ins-loan; 	
	
	printf("Enter Monthly Salary : ");
	scanf("%f",sal);
	printf("\nLoan : %f",loan);
	printf("\ninsaurance : %f",loan);
	printf("\nAfter Deduction Your Salary is : %f",gsal);
	
}