// Function with argument and with return value
#include<stdio.h>
#include<conio.h>
float Division (float a, float b);
void main()
{
	float a,b,div;
	printf("\nEnter a:");
	scanf("%f",&a);
	printf("\nEnter b:");
	scanf("%f",&b);
	div=Division(a,b);
	printf("\nDivision of a/b=%.2f",div);
}
float Division(float a, float b)
{
	float div;
	div=a/b;
	return div;
}
