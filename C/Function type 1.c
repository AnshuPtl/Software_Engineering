//Function with no argument and no return type
#include<stdio.h>
#include<conio.h>
void Addition();//Function prototype
void main()
{
	Addition();
}
void Addition()
{
	int a,b,sum;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	sum=a+b;
	printf("\nAddition of a+b=%d",sum);
}
