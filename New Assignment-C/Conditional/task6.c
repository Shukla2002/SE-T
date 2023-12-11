#include<stdio.h>
int main()
{

	char b;
	printf("Enter Character : ");
	scanf("%c",&b);
	
	char l=(b=='a'||b=='e'||b=='i'||b=='o'||b=='u');
	char l1=(b=='A'||b=='E'||b=='I'||b=='O'||b=='U');
	
	if (l||l1)
	{
		printf("\nIt is Vowel");
	}
	else
	{
		printf("\nIt is Consonant");
	}
}