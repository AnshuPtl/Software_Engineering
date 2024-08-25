#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,add,sub,mul,div;
	printf("\nEnter the value of a:");
	scanf("%f",&a);
	printf("\nEnter the value of b:");
	scanf("%f",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\nAddition of a+b is %.1f",add);
	printf("\nSubstraction of a-b is %.2f",sub);
	printf("\nMultification of a*b is %.3f",mul);
	printf("\nDivision of a/b is %.4f",div);
}
