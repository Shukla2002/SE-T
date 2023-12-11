#include<stdio.h>
main()
{
	int month;
	printf("Enter Number of Day : ");
	scanf("%d",&month);
	
	if (month==1)
	{
		printf("Monday");
	}
	else if (month==2)
	{
		printf("Tuesday");
	}
	else if (month==3)
	{
		printf("Wednesday");
	}
	else if (month==4)
	{
		printf("Thuresday");
	}
	else if (month==5)
	{
		printf("Friday");
	}
	else if (month==6)
	{
		printf("Saturday");
	}
	else if (month==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Enter Valid Number!!");
	
	}
}