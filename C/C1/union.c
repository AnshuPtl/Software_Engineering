#include<stdio.h>
#include<string.h>
union book{
	int id;
	char name[30];
	float price;
};
void main(){
	union book b1;
	b1.id=1;
	printf("id = %d\n",b1.id);
	strcpy(b1.name,"c++");
	printf("name = %s\n",b1.name);
	b1.price=299.99;
	printf("price = %.2f",b1.price);
}
