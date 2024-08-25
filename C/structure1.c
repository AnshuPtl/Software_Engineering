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
	char n[20];
	printf("\nEnter your id:-");
	scanf("%d",&e1.id);
	printf("\nEnter your name:-");
	scanf("%s",&n);
	strcpy(e1.name,n);
	printf("\nEnter your salary:-");
	scanf("%f",&e1.salary);
	printf("\nEMP-ID:- %d",e1.id);
	printf("\nEMP-NAME:- %s",e1.name);
	printf("\nEMP-SALARY:- %.2f",e1.salary);
}
