#include<stdio.h>
int main()
{
	int week;
	
	printf("Enter Weeknumber (1-7) : ");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thuresday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
		case 7:
			printf("Sunday");
			
		default:
			printf("Invalid Number");	
	}	
}