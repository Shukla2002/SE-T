#include<stdio.h>
struct display
{
	int id;
	char name[20];
	char adress[20];
	char technology[20];
			
	
};



main()
{
	struct display d1;
	
	printf("Enter Id : ");
	scanf("%d",&d1.id);
	fflush(stdin);
	printf("\nEnter Name : ");
	gets(d1.name);
	printf("\nEnter Adress : ");
	gets(d1.adress);
	printf("\nEnter Technology : ");
	gets(d1.technology);
	
	
	printf("Id : %d",d1.id);
	printf("\nName : %s",d1.name);
	printf("\nAdress : %s",d1.adress);
	printf("\nTechnology : %s",d1.technology);
	
}
