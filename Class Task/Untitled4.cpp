#include<stdio.h>

main()
{
	char name[20],temp,j;
	int l;
	
	printf("Enter Name : ");
	gets(name);
	
	l = strlen(name);
	
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		}
	}
	
	printf("Reverse of String : ",str[i])
	
	
}