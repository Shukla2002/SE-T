#include<stdio.h>
void main()

{
	int choice,n1,ans,n2;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	
	
	printf("\nPress 1 for Addition");
	printf("\nPress 2 for Substraction");
	printf("\nPress 3 for Multiplication");
	printf("\nPress 4 for Division");
	
	printf("\nEnter Your choice : ");
	scanf("%d",&choice);
	
		switch (choice)
		{
			case 1:
			
			ans = n1+n2;
			printf("Addition : %d",ans);
				break;
				
			case 2:
			
			ans = n1-n2;
			printf("Substraction : %d",ans);
				break;
				
			case 3:
			
			ans = n1*n2;
			printf("Multiplication : %d",ans);
				break;	
				
			case 4:
			ans = n1/n2;
			printf("Division : %f",ans);
				break;
				
			default:
			printf("Invalid choice!!");				
		}
	
}