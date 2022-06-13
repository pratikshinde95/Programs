//  to merge two array using pointers

#include<stdio.h>

int main(void)
{
	int i, j , *a ,*b ;
	int size1 =0 , size2 =0 ;
	
	printf("Enter Array1 size ");
	scanf("%d",&size1);
	printf("Enter Array2 size ");
	scanf("%d", &size2);
	
	int arr1[size1];
	int arr2[size2];
	//int max_size = size1 + size2;
	//int merge[max_size];

	printf("Enter Array1 :- ");
	for(i =0 ; i < size1 ;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("Enter Array2 :- ");
	for(i=0 ; i< size2 ;i++)
	{
		scanf("%d",&arr2[i]);
	}
	a = arr1;
	b =arr2;

	for(i =0 , j = size1; i < size2 ;i++,j++)
	{
		*(a +j) = *(b+i);
	}
	printf("The Merge Array is :- ");
	for(i =0 ; i< max_size;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	return 0;
}
		
	
