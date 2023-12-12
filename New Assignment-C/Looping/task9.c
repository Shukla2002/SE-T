#include<stdio.h>
main()
{
	int n,sum=0,n1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while (n>0)
	{
		n1 = n%10;
		sum = sum+n1;
		n = n/10;
	}
	printf("Sum is : %d",sum);
}