#include<stdio.h>
#include<conio.h>
int square(int n){
	printf("number passed from main function is %d\n",n);
	printf("This function return square of %d\n",n);
	return(n*n);
}
void main(){
	int n,value;

	printf("Enter value to pass function : ");
	scanf("%d",&n);
	value=square(n);
	printf("value = %d",value);

}
