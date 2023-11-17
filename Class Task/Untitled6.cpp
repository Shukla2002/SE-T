#include<stdio.h>

struct add
{
	
	int a,b;
	int add;
};

int main()
{
	struct add s1;
	
	printf("Enter Number 1 : ");
	scanf("%d",&s1.a);
	
	printf("\nEnter Number 2 : ");
	scanf("%d",&s1.b);
	
	s1.add = s1.a+s1.b;
	
	printf("\nAddition : %d",s1.add);
}