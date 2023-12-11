#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("\nEnter Number 2 : ");
	scanf("%d",&n2);
	printf("\nEnter Number 3 : ");
	scanf("%d",&n3);
	
	
	
	n1>n2?n1>n3?printf("\nNumber 1 is Greatest"):printf("\nNumber 3 is greatest"):n2>n3?printf("\nNumber 2 is Greatest"):printf("\nNumber 3 is Greatest");
}