#include<stdio.h>
main()
{
	float year,day;
	printf("Enter Year : ");
	scanf("%f",&year);
	day = year*365;
	printf("Years into Days is : %f",day);
}