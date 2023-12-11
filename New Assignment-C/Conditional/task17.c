#include<stdio.h>
main()
{
	int s1,s2,s3,sum;
	printf("Enter Side 1 of Triangle : ");
	scanf("%d",&s1);
	printf("\nEnter Side No 2 of Triangle : ");
	scanf("%d",&s2);
	printf("\nEnter Side No 3 of Triangle : ");
	scanf("%d",&s3);
	
	sum = s1+s2+s3;
	if (sum==180)
	{
		printf("\nTriangle Formed!!");
	}
	else
	{
		printf("\nNo Triangle can not be formed!!");
	}
	
	
}