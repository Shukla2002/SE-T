#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	
	printf("\nEnter Name :  ");
	gets(name);
	
	printf("\nReverse of string is : %s",strrev(name));
}