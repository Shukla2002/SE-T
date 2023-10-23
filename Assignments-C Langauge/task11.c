#include<stdio.h>
int main()

{
	char n;
	
	printf("Enter Word to find vowel or consonent : ");
	scanf("%c",&n);
	
	switch(n)
	{
	
	case 'A':		
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':		
	case 'e':
	case 'i':
	case 'o':
	case 'u':	
		
		printf("\n%c is a vowel",n);
		
		break;
	
	default : printf("This word is consonent");
	break;
}
}