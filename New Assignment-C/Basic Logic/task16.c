#include<stdio.h>
main()
{
	char fname[20], mname[20], lname[20],rname[20];

      /* Read the full name */

     printf("Enter full name of Country : ");

     scanf("%s %s %s", fname, mname,lname,rname);

      /* print abbreviated name */

     printf("\nAbbreviated name is : %c. %c. %c", fname[0],mname[0],rname[0]);
	
}