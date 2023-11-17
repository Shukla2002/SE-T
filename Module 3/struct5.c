#include<stdio.h>


struct employee
{
	int empno[5];
	char empname[20];
	char address[20];
 
};	
	
main()
{
	int i;
	struct employee e1;
	for(i=0;i<5;i++)
	{
	
		printf("\nEnter Employee Number : ");
		scanf("%d",&e1.empno[i]);
		fflush(stdin);
		printf("\nEnter Employee Name : ");
		scanf("%s",&e1.empname);
		fflush(stdin);
		printf("\nEnter Adress : ");
		gets(e1.address);
	
	}
	for(i=0;i<5;i++)
	{
	
		printf("\nEmployee Number: %d",e1.empno[i]);
		printf("\nEmployee Name: %s",e1.empname);
		printf("\nEmployee Adress: %s",e1.address);		
	}	
}
