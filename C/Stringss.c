#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20],s3[20];
	int x,i1,i2,i3;
	printf("\nEnter string 1:");
	scanf("%s",&s1);
	printf("\nEnter string 2:");
	scanf("%s",&s2);
	x = strcmp(s1,s2);
	/*string comparision*/
	if(x!=0)
	{
		printf("\nStrings are not equal");
		printf("\nconcat strings:%s",strcat(s1,s2));
	}
	else
	{
		printf("\nStrings are equal");
		strcpy(s3,s1);
		/*string copy(to,from)*/
		printf("\nCopied string:%s",s3);
		i1=strlen(s1);
		i2=strlen(s2);
		i3=strlen(s3);
		printf("\nLenth of s1:%d",i1);
		printf("\nLenth of s2:%d",i2);
		printf("\nLenth of s3:%d",i3);
	}
}
