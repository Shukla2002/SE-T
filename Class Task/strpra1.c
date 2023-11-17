#include<stdio.h>
#include<string.h>

main()
{
	char name[20];
	
	printf("Enter Name : ");
	gets(name);
	
	printf("\nLength of string is : %d",strlen(name));
	
}