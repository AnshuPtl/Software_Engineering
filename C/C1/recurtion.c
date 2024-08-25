#include<stdio.h>
int factorial(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
void main(){
	int n,fact;
	printf("Enter the value = ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial = %d",fact);
}
