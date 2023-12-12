#include<stdio.h>
main()
{
	/*
		declare the data type and variable
	*/
	char ch;
	/*
		printf and scanf for accept character from user
	*/	
	printf("Enter Character : ");
	scanf("%c",&ch);
	/*
		through the this statment we get the asci value of particular character
	*/
	printf("\nThe Ascii value of character is : %d",ch);
}