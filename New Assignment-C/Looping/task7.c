#include<stdio.h>
main()
{
	int n,re=0,rema;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while (n!=0)
	{
		rema = n%10;
		re = re*10+rema;
		n=n/10;
	}
	printf("Reverse Number is : %d",re);
}