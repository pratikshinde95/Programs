// to find the size of the int array

#include<stdio.h>

int main(void)
{
	int i ;
	int size;
	printf("enter size of array :- ");
	scanf("%d",&size);//  to get the array size from user
	int arr[size];// creating a array variable(arr ) of size entered by user
	printf("Enter Array Elements :\n");//
	for(i=0 ; i < size; i++)//taking the array elements from user
	{
		scanf("%d",&arr[i]);
	}
	printf("Entered array is:- ");
	for(i=0; i< size;i++)// printing the user entered array
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Array Size is:%ld\n",sizeof(arr));// getting the size of array by using sizeof of operator
	// the size of int array will be size of int (4BYtes) * no of array elements
	return 0;
}



