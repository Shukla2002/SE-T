#include<stdio.h>
#include<string.h>

void main()
{

int i;
char name[20];

printf("Enter Name : ");
gets(name);

printf("Reverse of String : %s",strrev(name));

}