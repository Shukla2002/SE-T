#include<stdio.h>
void main()

{
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Addition : %d",a+b);
	printf("\nSubstraction : %d ",a-b);
	printf("\nMultiplication : %d ",a*b);
	printf("\nDivision : %f",(a/(float)b));
	printf("\nModulo : %d ",a%b);
	
	
}