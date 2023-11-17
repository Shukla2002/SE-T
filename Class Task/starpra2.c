#include<stdio.h>
int main()
{
	int i;
	char name[20];
	int count = 0;
	
	printf("Enter Name : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("Length of string is : %d",count);
}