#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	printf("\nPress 1 for Monday\nPress 2 for Tuesday\nPress 3 for Wednesday\nPress 4 for Thursday\nPress 5 for Friday\nPress 6 for Saturnday\nPress 7 for Sunday\nEnter your choise:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWednesday");
			break;
		case 4:
			printf("\nThursday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturnday");
			break;
		case 7:
			printf("\nSunday");
			break;
		default:
			printf("\nWrong choise. Choose choise between 1 to 7");
			break;
	}
}
