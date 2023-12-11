#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nAfter Swap A : %d",a);
	printf("\nAfter Swap B : %d",b);
	
}