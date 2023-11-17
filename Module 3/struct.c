#include<stdio.h>


struct employee
{
	int empno;
	char empname[20];
	char address[20];
 
};	
	
main()
{
	struct employee e1;
	
	printf("Enter Employee Number : ");
	scanf("%d",&e1.empno);
	fflush(stdin);
	printf("\nEnter Employee Name : ");
	scanf("%s",&e1.empname);
	fflush(stdin);
	printf("\nEnter Adress : ");
	gets(e1.address);
	
	printf("Employee Number: %d",e1.empno);
	printf("\nEmployee Name: %s",e1.empname);
	printf("\nEmployee Adress: %s",e1.address);
	
}