#include<stdio.h>
main()

{
	char name[20];
	int count = 0,i;
	
	printf("Enter Name : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	
printf ("The length of string is : %d",count);
}