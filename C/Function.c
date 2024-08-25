#include<stdio.h>
#include <conio.h>
void main()
{
	printf("\nAddition of n1+n2=%d",Addition(10,20));
	printf("\nAddition of n1+n2=%d",Addition(20,30));
	printf("\nAddition of n1+n2=%d",Addition(22,22));
	printf("\nAddition of n1+n2=%d",Addition(199,200));
}
int Addition (int a, int b)
{
	int result;
	result = a+b;
	return result;
}

//Type of function:-
// 1. Function with no argument and no return type
//2. Function with argument and no return type
//3. Function with no argument and return type
//4. Function with argument and with return type
