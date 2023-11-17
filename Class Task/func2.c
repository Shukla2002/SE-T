#include<stdio.h>

void Student(a,b)
{
	printf("\nAddition : %d",a+b);
	printf("\nSubstraction : %d",a-b);
	
}


main()
{
	int a,b;
	
	printf("\nEnter Number 1 :");
	scanf("%d",&a);
	printf("\nEnter Number 2 :");
	scanf("%d",&b);
	
	Student(a,b);
}