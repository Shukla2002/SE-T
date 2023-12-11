#include<stdio.h>
main()
{
	char fname[20], mname[20], lname[20];

      /* Read the full name */

     printf("Enter full name of School : ");

     scanf("%s %s %s", fname, mname, lname);

      /* print abbreviated name */

     printf("\nAbbreviated name is : %c. %c. %c.", fname[0], mname[0], lname[0]);
	
}