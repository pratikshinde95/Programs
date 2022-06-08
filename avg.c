// to take 5 int from user in array and to find sum and avg of the same

#include<stdio.h>

int main(void)
{
	int i, j=0 , number=0,avg =0;
	int arr[5];
	printf("enter 5 Numbers\n");
	for(i =0 ; i < 5 ; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0 ;i < 5 ;i++)
	{
		number = arr[i] + number;
	}
	avg = number/ j;
	printf("sum of all array members :- %d\n ",number);
	printf("Average = %d\n",avg);
	return 0;
}
		
	

