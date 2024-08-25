#include<stdio.h>
#include<conio.h>
#include<strings.h>
void main()
{
	char f[20],l[20],fn[20];
	int len;
	printf("\nEnter you fname:");
	scanf("%s",&f);
	printf("\nEnter you lname:");
	scanf("%s",&l);
	len=strlen(f);
	//0-> True / 1 -> False
	strcpy(fn,f);
	printf("\nCopied string %s",fn);
	printf("\n Is both same %d",strcmp(f,l));
	printf("\nYour fname length %d",len);
	printf("\nYour name is %s",strcat(f,l));

}
