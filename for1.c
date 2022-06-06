// to print a pattern gccusing loops

#include<stdio.h>

int main(void)
{
	int i , j , number=0;
	printf("Enter No. of rows:-");
	scanf("%d",&number);
	for(i=0 ; i<= number ;i++)
	{
		for(j=0; j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=number ; i >=1 ; i--)
	{
		for(j =1 ;j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
