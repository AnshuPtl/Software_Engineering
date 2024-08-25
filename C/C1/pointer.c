#include<stdio.h>
#include<conio.h>
void main(){
	int i=10;
	int *p,**q;
	char c='a';
	char *r;
	printf("i = %d\n",i);
	p=&i;
	printf("address of i = %u\n",&i);
	printf("address of i using pointer : %u\n",p);
	printf("address of pointer = %u\n",&p);
	printf("VALUE of i using pointer = %d\n",*p);
	q=&p;
	printf("address of pointer p = %d\n",**q);
	r=&c;
	printf("%u\n",r);
}
