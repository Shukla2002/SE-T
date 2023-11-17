#include<stdio.h>

main()
{
	char name[20];
	int i,l=0;
	
	
	printf("Enter Name : ");
	gets(name);
	
	while(name[l]!='/0')
	{
		l++;
		
	}
	
	i = l-1;
	
	while(i>=0)
	{
		printf("%c",name[i]);
		i--;
	}
	
	
}