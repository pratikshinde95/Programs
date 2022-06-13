// to merge two array using pointers

#include<stdio.h>

int main(void)
{
	int i , j ;
	int arr1[5],arr2[5];
//	int merge[10];
	int size1 =0 , size2 =0 ;
	
	printf("Enter Array1 Elements :- ");
	for(i=0 ; i< 5; i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Array2 Elements :- ");
	for(i=0 ; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	printf("Entered Array1 elements are :- ");
	for(i=0 ;i< 5; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("Entered Array2 Elements are :- ");
	for(i=0 ; i< 5;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	
	size1 = sizeof(arr1)/ sizeof(arr1[1]);
	size2 = sizeof(arr2)/sizeof(arr2[1]);
	int merge[size1+size2];
	for (i =0 ; i <= size1 ;i++)
	{
		merge[i] = arr1[i];
	}
	for( j=0;j<size1;j++)
	{
		printf("%d ",merge[i]);
	}
	

	return 0;
}

