// to find GCD of two numbers

#include<stdio.h>

int main(void)
{
	int num1 , num2  , result,i;
	printf("Enter Num1 :- ");
	scanf("%d", &num1);
	printf("Enter Num2 :- ");
	scanf("%d", &num2);
	printf("%d %d\n",num1 , num2);

	for(i = 1 ; i <= num1 && i <= num2 ; ++i)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			result = i;
		}
	}
	printf("GCD of %d and %d is :- %d\n" , num1 , num2 , result);
	return 0;
}
