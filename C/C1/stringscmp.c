#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str1[30]="abcd",str2[30]="abcd";
	int i;
	if(strcmp(str1,str2)==0){
		printf("string are same");
	}
	else{
		printf("string are not same");
	}
}
