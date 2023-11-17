#include<stdio.h>
void main()
{
	int n,r,t;
	int si;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	printf("\nEnter Rate of Interest : ");
	scanf("%d",&r);
	printf("\nEnter Time duration : ");
	scanf("%d",&t);
	
	si= n*r*t/100;
	{
	
	printf("\nSimple intrest is : %d",si);
}
}