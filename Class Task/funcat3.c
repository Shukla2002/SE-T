#include<stdio.h>

int Student()
{
	
	int a;
	int fact=1,i;
	printf("Enter Number : ");
	scanf("%d",&a);
	
	
	
	for(i=1;i<=a;i++)
	{
		fact = fact*i;
	}
	return fact;
}

main()
{
	
	
	printf("\nFactorial : %d",fact);
	Student();	
}