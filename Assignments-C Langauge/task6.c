#include<stdio.h>
void main()
{
	int d;
	int y;
	printf("Enter years to convert in days : ");
	scanf("%d",&y);
	
	d = y*365;
	{
		printf("Years into Days is : %d",d);
	}
	
	{
		int d;
		float y;
		
		printf("\n\nEnter Days to convert in years : ");
		scanf("%d",&d);
		
		y = d/364;
		{
		
		printf("\nYears into days is : %f",y);
	}
	}
	
}