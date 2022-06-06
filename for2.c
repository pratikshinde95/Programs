// to print pyramid of numbers
#include<stdio.h>

int main(void)
{
	int i , j , rows;
	printf("Enter No of Rows\n");
	scanf("%d", &rows);

	for(i =1;i<= rows;i++)
	{
		for(j=1;j<= i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=rows;i>= 1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
