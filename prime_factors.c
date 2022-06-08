// to find prime factors

#include<stdio.h>

int main(void)
{
	int i, j, number=0, prime;

	printf("Enter Number:- ");
	scanf("%d",&number);
	printf("Prime Factors are :- ");
	for(i=2 ; i <= number ;i++)
	{
		if(number % i==0)
		{
			prime = 1;
			for(j=2; j <= i/2 ; j++)
			{
				if(i%j == 0)
				{
					prime = 0;
					break;
				}
			}
			if(prime == 1)
			{
				printf("%d ", i);
			}
		}
	}
	printf("\n");
	return 0;
}


