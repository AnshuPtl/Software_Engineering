 #include<stdio.h>
 #include<conio.h>
 void main(){
	int n,i,fact=1;

	printf("Enter number of find factorial : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	printf("factorial of %d is = %d ",n,fact);

 }
