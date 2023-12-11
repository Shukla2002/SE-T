#include<stdio.h>
main()
{
	int m1,m2,m3,tot,tot1;
	
	printf("Enter Maths Marks : ");
	scanf("%d",&m1);
	printf("\nEnter Physics Marks : ");
	scanf("%d",&m2);
	printf("\nEnter Chemistry Marks : ");
	scanf("%d",&m3);
	
	tot1 = m1+m2;
	printf("\nTotal Marks you get in Maths & Physics is : %d",tot1);
	
	tot = m1+m2+m3;
	printf("\nTotal Marks you get is : %d",tot);
	
	if (m1>=65&& m2>=55&& m3>=50&& tot1>=140&& tot>=190)
	{
		printf("\n\nYou are eligible!!");
		
	}
	else
	{
		printf("\n\nYou are not eligible!!");
	}
}