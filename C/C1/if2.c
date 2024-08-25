#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	printf("\nYou Have a car? :");
	scanf("%d",&i);
	if(i==1)
	{
		printf("\nEnter Your order here :");
		scanf("%d",&j);
		if(j>=0)
		{
			printf("\npress 1 for regular \npress 2 for medium \npress 3 for large \npress 4 for monster \nWhich pizza size you like to pick :  ");
			scanf("%d",&k);
			if(k>=1)
			{
				printf("\nHowmany quantity you want : ");
			}
			else
			{
				printf("\nInvalid Input");
			}
		}
		else
		{
			printf("\nInvalid input");
		}
	}
	else
	{
		printf("\nNo home delivery available");
	}
}
