#include<stdio.h>


int main(void)
{
	int num ;
	int i;
	i=2;
	printf("Enter NUmber");
	scanf("%d",&num);
	while(num)
	{
		if(num % i ==0)
		{
			printf("%d",i);
			num =num /i;
			printf("%d\n",num);
		}
	else
	{
		i++;
		printf("H\n");
	}
	}
	return 0;
}
