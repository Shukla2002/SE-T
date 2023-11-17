#include<stdio.h>

void add();
void add(int a,int b)
{
	int ans;
	ans = a+b;
	printf("\n Addition : %d",&ans);
}

main()
{
	int a,b;
	printf("Enter Number A : ");
	scanf("%d",&a);	
	printf("Enter Number B : ");
	scanf("%d",&b);

	add(a,b);

	
}