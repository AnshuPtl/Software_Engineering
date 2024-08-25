#include<stdio.h>
#include<conio.h>
void main(){
	int i=10;
	char c='a';
	void *p;
	p=&i;
	printf("%u\n",p);
	printf("%d\n",*((int *)p));
	p=&c;
	printf("%u\n",p);
	printf("%c\n",*((char *)p));
}
