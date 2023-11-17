#include<stdio.h>
void main()
{
	
	int n,n1,choice,ans;
	printf("Enter two Numbers  : ");
	scanf("%d %d",&n,&n1);
	
	printf("\npress 1 for Addition");
	printf("\npress 2 for multiplication");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	case 1:
		ans = n+n1;
		printf("Addition of number is : %d",ans);
		break;
		
	case 2:
		ans = n*n1;
		printf("Multiplication of number is : %d",ans);
		break;
		
		default:
			printf("Invalid choice");
			
		}
		
}