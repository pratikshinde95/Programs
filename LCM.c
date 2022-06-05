// to find LCM of two integers
#include<stdio.h>

int main (void)
{
	int num1 , num2 , result;
	int  max =0;
	printf("Enter  Num1 :- ");
	scanf("%d", &num1);
	printf("Enter Num2 :- ");
	scanf("%d", &num2);
	if(num1 < num2 )
	{
		max = num2 ;
		//printf("%d",max);
	}
	else
	{
		max = num1 ;
		//printf("max = %d",max);
	}
	while(1)
	{
		if((max % num1 == 0) && (max % num2 == 0))
			{
				printf("LCM of %d and %d is:- %d\n", num1 , num2 ,max);
				break;
			}
		++max;
	}
	
	return 0;
}
