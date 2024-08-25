#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[10];
	printf("Enter elements of array:-\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n---------------------\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",arr[i]);
	}
}
