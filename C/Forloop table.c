#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	printf("Enter the value of print table");
	scanf("%d",&j);
	for(i=1;i<=10;i++)
    {
		printf("%d*%d=%d\n",j,i,i*j);
	}
}

