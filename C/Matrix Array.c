#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,col;
	int matrix[10][20];
	printf("\nEnter rows:");
	scanf("%d",&row);
	printf("\nEnter cols:");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter data in [%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
}
