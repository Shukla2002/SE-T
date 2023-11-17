#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	char name1[20];
	
	
	printf("\nEnter Name :  ");
	gets(name);
	printf("\nEnter Name1 :  ");
	gets(name1);
	
	printf("\nJoin of string is : %s",strcat(name,name1));
}