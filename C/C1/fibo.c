#include<stdio.h>
void fibbo(int range){
	int a=0,b=1,c;
	while(a<=range){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
void main(){
	int range;
	printf("Enter your range : ");
	scanf("%d",&range);
	fibbo(range);
	
}
