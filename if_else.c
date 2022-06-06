// to print numbers(1 to 9) in words and if <9 print same in words

#include<stdio.h>


int main(void)
{
	int number;
	printf("Enter Your NUmber :- ");
	scanf("%d", &number);
	if (number <= 9)
	{
		switch(number)
		{
			case 0:
				printf("Zero");
				break;
			case 1: 
				printf("one");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
			 	printf("Six");
			 	break;
			 case 7:
			 	printf("Seven");
			 	break;
			 case 8:
			 	printf("Eight");
			 	break;
			 case 9 :
			 	printf("Nine");
			 	break;
		}
		printf("\n");
	}
	else
	{	printf("Number Is Greater Than Nine\n");}

	return 0;
}
