#include<stdio.h>
#include<conio.h>
void main()
{
	//syntax:- datatype arr_name[arr size]
	//loc(Index)   0   1   2   3   4
	int arr[5] = {111,222,333,444,555},i;
	for(i=0;i<=4;i++)
	{
		printf("%d\t",arr[i]);
	}
}
