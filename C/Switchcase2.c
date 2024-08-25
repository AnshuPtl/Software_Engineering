#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,a,b,add,sub,mul,div;
	printf("\nPress 1 for Addition\nPress 2 for Substraction\nPress 3 for Multification\nPress 4 for Division\nEnter your choise:");
	scanf("%d",&ch);
				printf("\nEnter the value of a:");
				scanf("%d",&a);
				printf("\nEnter the value of b:");
				scanf("%d",&b);
				add=a+b;
				sub=a-b; 
				mul=a*b;
				div=a/b;
	switch(ch)
	{
		case 1:
			printf("\nAddition of a+b is %d",add);
			break;
		case 2:
			printf("\nSubstraction of a-b is %d",sub);
			break;
		case 3:
			printf("\nMultification of a*b is %d",mul);
			break;
		case 4:
			printf("\nDivision of a/b is %d",div);
			break;
		default:
			printf("\nWrong choise. Choose choise between 1 to 4");
			break;
	}
}
