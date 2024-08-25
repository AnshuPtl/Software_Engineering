#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("\nEnter Number:");
	scanf("%d",&i);
	if(i>0)
	{
		printf("\nPOSITIVE");
	}
	else if(i<0)
	{
		printf("\nNEGATIVE");
	}
	else
	{
		printf("\nZERO");
	}
}
