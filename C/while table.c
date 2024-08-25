#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	i=0;
	printf("\nEnter value of print table:");
	scanf("%d",&j);
	while(i<10)
	{
		i=i+1;
		printf("%d*%d=%d\n",i,j,i*j);
	}
}
