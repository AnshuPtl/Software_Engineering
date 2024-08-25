#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};
	int *p;
	int i;
	p=arr;
	for(i=0;i<5;i++){
		printf("Element at index %d is : %d\n",i,*p);
		p++;
	}
}
