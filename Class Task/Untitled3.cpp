#include<stdio.h>
#include<string.h>

main()

{
	char name[20];
	char name1[20];
	printf("Enter Name : ");
	gets(name);
	
	strcpy(name1,name);
	printf("name1=%s",name1);
	
	
	
}