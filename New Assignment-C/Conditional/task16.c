#include<stdio.h>
main()
{
	int t;
	printf("Enter Temprature : ");
	scanf("%d",&t);
	
	if (t<0)
	{
		printf("Freezing weather!!");
	}
	else if (t<10)
	{
		printf("Very Cold Weather!!");
	}
	else if (t<20)
	{
		printf("Cold Weather!!");
	}
	else if (t<30)
	{
		printf("Normal Temprature!!");
	}
	else if (t<40)
	{
		printf("its Hot!!");
		
	}
	else
	{
		printf("It is very hot!!");
	}
}