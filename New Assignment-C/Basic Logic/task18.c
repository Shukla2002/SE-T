#include<stdio.h>

main()
{
	int sal,ysal;
	printf("Enter Your Monthly Salary : ");
	scanf("%d",&sal);
	
	ysal = sal*12;
	printf("\nYour Annual Salary is : %d",ysal);
}