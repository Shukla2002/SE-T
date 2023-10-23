#include<stdio.h>

void main()
{
	int n,i;
	int n1=0;
	int n2=1;
	int n3 = n1+n2;
	
	printf("\nEnter Terms : ");
	scanf("%d",&n);
	
	
	printf("\nFibbonacci series : \n%d\n%d",n1,n2);
	
	for(i=3;i<=n;i++)
	{
	printf("\n%d",n3);
	
		
		n1 = n2;
		n2 = n3;
		n3 = n1+n2;
	}
		
}