#include<stdio.h>

main()
{
	int a[5];
	int b[5];
	int c[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Numbers of A a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEnter Numbers of B b[%d] : ",i+1);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nAddition of Number : %d",a[i]+b[i]);
		printf("\nSubstraction of Number : %d",a[i]-b[i]);
		printf("\nMultiplication of Number : %d",a[i]*b[i]);
	}
	
}