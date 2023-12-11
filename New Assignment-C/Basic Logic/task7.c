#include<stdio.h>
int main()
{
	int w,l,area;
	
	printf("Enter Width : ");
	scanf("%d",&w);
	printf("Enter Length : ");
	scanf("%d",&l);
	
	area = w*l;
	printf("Area of Rectangle is : %d",area);
}