#include<stdio.h>
void main()
{
	int n;
	printf("Enter Year : ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("The year is leap year",n);
	}
	else{
		printf("The year is not leap year");
	}
}