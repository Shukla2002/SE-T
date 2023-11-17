#include<stdio.h>
int main()
{
	int weekdays;
	
	printf("Enter the number os week days (consider 1= monday and 7= sunday) : ");
	scanf("%d",&weekdays);
	
	
	switch(weekdays)
	{
		case 1:printf("Monday");
			break;
		case 2:printf("Tuesday");
			break;	
		case 3:printf("Wednesday");
			break;
		case 4:printf("Thuresday");
			break;
		case 5:printf("Friday");
			break;
		case 6:printf("Satuerday");
			break;	
		case 7:printf("Sunday");
			break;
			
		default : printf("Please enter number between 1 to 7");
	}
}