#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	a = a*b;
	b = a/b;
	a = a/b;
	
	printf("\nAfter Swap A : %d",a);
	printf("\nAfter Swap B : %d",b);
	
}