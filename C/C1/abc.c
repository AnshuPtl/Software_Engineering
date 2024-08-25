#include<stdio.h>
#include<conio.h>
int fun(int,int);
void main(){
	int a,b,c;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	c=fun(a,b);
	printf("c = %d",c);
}
int fun(int a, int b){
	int k;
	k=a+b;
	return k;
}
