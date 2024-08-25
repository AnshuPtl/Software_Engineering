/* even number by array */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[11];
	printf("Enter elements of array:-\n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n--------------------------------\n");
	for(i=0;i<=10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
}
