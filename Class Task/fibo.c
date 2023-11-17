#include<stdio.h>
main()
{
	int n,i;
	int n1=0,n2=1;
	int n3 = n1+n2;
	
	printf("Enter Terms : ");
	scanf("%d",&n);
	
	printf("\n%d",n1);
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++)
	{
		printf("\n%d",n3);
		n1 = n2;
		n2 = n3;
		n3 = n1+n2;
	}
}