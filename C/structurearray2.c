#include<stdio.h>
#include<conio.h>
struct info{
	int id;
	char name[25];
	char addr[25];
	int age;
};
void main()
{
	struct info std[100];
	int n,i;
	printf("\nEnter number of student :- ");
	scanf("%d",&n);
	printf("\nEnter id | name | adress | age:\n");
	for(i=0;i<n;i++)
	{
		printf("\n----------STUDENT-DATA------------\n");
		scanf("%d %s %s %d",&std[i].id,&std[i].name,&std[i].addr,&std[i].age);
	}
	printf("\nID | Name | Addr | Age\n");
	printf("\n----------------------\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d | %s | %s | %d\n",std[i].id,std[i].name,std[i].addr,std[i].age);
	}
	printf("\n--------------ID---------------\n");
	printf("\nEnter id to search:");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(id==std[i].id)
		{
				printf("\n%d | %s | %s | %d\n",std[i].id,std[i].name,std[i].addr,std[i].age);	
		}
		else
		{
			continue;
		}
	}
}   
