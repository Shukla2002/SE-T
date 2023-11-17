#include<stdio.h>
#include<string.h>

main()
{
	int i,j,len;
	char str[]="INDIA";
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	
}