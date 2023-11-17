#include<stdio.h>

int Addition()
{
	int add;
	int a,b;
	printf("Enter 2 Numbers : ");
	scanf("%d%d",&a,&b);
	add = a+b;
	return add;
	
}


main()
{
	int result;
	result=Addition();
	printf("Addition : %d",result);
}