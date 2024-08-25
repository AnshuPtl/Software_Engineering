#include<stdio.h>
#include<conio.h>
#include<strings.h>
struct emp{
	int id;
	float salary;
	char name[20];
};

void main()
{
	struct emp e1;
	char n[20] = {'T','O','P','S'};
	e1.id = 10;
	e1.salary = 10000;
	strcpy(e1.name,n);
	printf("\nEMP ID = %d",e1.id);
	printf("\nEMP SALARY = %.2f",e1.salary);
	printf("\nEMP NAME = %s",e1.name);
	
}
