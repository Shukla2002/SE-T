#include<stdio.h>

void main()

{
	int n,i;
	int sum=0,sumf=0;
	int evencount=0,oddcount=0;
	
		for (i=1;i<=10;i++)
	
		{
			printf("\nEnter 10 Numbers : ");
			scanf("%d",&n);
	
			if(n%2==0)
			{
				printf("Number is Even");
				sum += 1;
				evencount += n;
			}
	
			else
			{
				printf("Number is odd");
				sumf += 1;
				oddcount += n;		
			}		
	
		}	
	
		printf("\nSum of even number is : %d",sum);
		printf("\nSum of odd number is : %d",sumf);
		printf("\nSum of even number is : %d",evencount);
		printf("\nSum of odd number is : %d",oddcount);	
}