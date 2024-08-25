// Function with argument and no return value
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("\nEnter b:");
	scanf("%d",&b);
	Addition(a,b);
}
int Addition(int i, int j)
{
	int sum;
	sum = i+j;
	printf("\nAddition of a+b=%d",sum);
}
