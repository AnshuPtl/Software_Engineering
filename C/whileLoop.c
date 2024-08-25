#include<stdio.h>
#include<conio.h>
void main()
{
	// ITERATION
	int i;
	i=0;
	while(i<10)
	{
		i=i+1;
		if(i==3)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
