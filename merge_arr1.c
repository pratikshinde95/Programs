// to merge two arrays

#include<stdio.h>
void print_arr(int arr[] , int size);
int main(void)
{
	int size1 =0 , size2 =0 ;
	int i ,j ;
	printf("Enter Array1 size ");
	scanf("%d",&size1);
	printf("Enter Array2 size ");
	scanf("%d",&size2);

	int arr1[size1];
	int arr2[size2];
	int max_size = size1 + size2 ;

	int merge[max_size];

	printf("Enter Array1 ;-");
	for(i =0 ; i < size1 ;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("Enter Array2 :-");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	for(i =0 ; i < size1 ; i++)
	{
		merge[i] = arr1[i];
	}
	int arr = i;
	for(j = 0 ; j < size2 ;j++)
	{
		merge[arr] = arr2[j];
		arr++;
	}

	printf("Array 1 is :- \n");
	print_arr(arr1, size1);
	printf("Array 2 is :- \n");
	print_arr(arr2 , size2);
	printf("\n");
	printf("Merged array is :- \n");
	print_arr(merge,max_size);
	return 0;
}

void print_arr(int arr[] , int size)
{
	int i;
	for(i =0 ; i < size;i++)
	{
		printf("%d ",arr[i]);
	}
}
