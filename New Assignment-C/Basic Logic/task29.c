#include<stdio.h>
int main()
{
	float min,sec,hour;
	
	printf("Enter Minutes : ");
	scanf("%f",&min);
	sec = min*60;
	printf("\nMinute into second is : %f",sec);
	hour = min/60;
	printf("\nMinutes into Hour is : %f",hour);
}