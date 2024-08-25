#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	int i;
	char name[]="Hello";
	FILE *p;
	p = fopen("hello.txt","w");
	if(p==NULL){
		printf("file not created");
		exit(0);
	}
	for(i=0;i<strlen(name);i++){
		fputc(name[i],p);
	}
	fclose(p);
}
