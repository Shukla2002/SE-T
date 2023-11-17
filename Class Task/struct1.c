#include<stdio.h>

struct name
{
	
	int n,n1;
	int ans;

	
};


main()
{
	
	struct name s1;
	
	printf("Enter Number 1 : ");
	scanf("%d",&s1.n);
	printf("\nEnter Number 2 : ");
	scanf("%d",&s1.n1);
	
	s1.ans = s1.n+s1.n1;
	printf("\nAddition : %d",s1.ans);
	
	
	
}