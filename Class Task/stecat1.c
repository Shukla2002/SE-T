#include<stdio.h>

main()
{
	int i,j;
	char n[20],n1[20];
	
	printf("Enter Name : ");
	gets(n);
	printf("\nEnter Name 2 : ");
	gets(n1);
		
	while(n[i]!='\0')
	{
		i++;
	}
	while(n1[j]!='\0')
	{
		n[i]=n[j];
		j++;
		i++;
		
	}
	printf("Merge String : %s",n);
}