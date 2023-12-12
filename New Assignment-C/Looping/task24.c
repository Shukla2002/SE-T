#include<stdio.h>
main()
{
	int n,sum=1,i;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		sum = sum+i;
	}
	printf("\nSum : %d",sum);
}