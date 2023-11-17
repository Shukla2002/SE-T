#include <stdio.h>

void main()
{
	int n1,n2,n3;
	printf("Enter Numbers to find greatest number : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("Number 1 is greatest");
		}
		else
		{
			printf("Number 3 is greatest");
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("Number 2 is greatest");
		}
		else
		{
			printf("Number 3 is greatest");
		}
	}
}