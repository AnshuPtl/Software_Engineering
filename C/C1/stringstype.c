#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char value[40],dest[40],str[30]="TOPS";
	int i;
	puts("Enter your string : ");
	gets(value);
	puts(value);
	strrev(value);
	puts(value);
	i = strlen(value);
	printf("length of string is : %d\n",i);
	strcpy(dest,"tops int");
	printf("your string is : %s\n",dest);
	strcat(value,dest);
	strlwr(str);
	puts(str);
	strupr(str);
}
