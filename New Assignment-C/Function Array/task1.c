#include<stdio.h>
int main()
{
	int choice,n1,n2,sum,n;
	
	printf("\nPress 1 for Addition\nPress 2 for Substraction\nPress 3 for Multiplication\nPress 4 for Division");
	printf("\nEnter Choice : ");
	scanf("%d",&n);
	
	
	
	switch (choice)
	{
		case 1:
			printf("\nEnter Number 1 : ");
			scanf("%d",&n1);
			printf("\nEnter Number 2 : ");
			scanf("%d",&n2);
			sum = n1+n2;
			printf("Addition : %d",sum);
			break;
			
		case 2:
			printf("\nEnter Number 1 : ");
			scanf("%d",&n1);
			printf("\nEnter Number 2 : ");
			scanf("%d",&n2);
			sum = n1-n2;
			printf("Substraction : %d",sum);
			break;
			
		case 3:
			printf("\nEnter Number 1 : ");
			scanf("%d",&n1);
			printf("\nEnter Number 2 : ");
			scanf("%d",&n2);
			sum = n1*n2;
			printf("Substraction : %d",sum);
			break;
			
		case 4:
			printf("\nEnter Number 1 : ");
			scanf("%d",&n1);
			printf("\nEnter Number 2 : ");
			scanf("%d",&n2);
			
			printf("Substraction : %d",sum);
			break;	
			
		default:{
			printf("Enter Valid Number");
			break;
		}
	}
}

