// Selection Sort
# include<stdio.h>

int main(void)
{
	int i , j ,arr[5];
	int size =0;
	int temp=0;
	size = sizeof(arr)/sizeof(arr[1]);
	printf("Enter Array Elements :- \n");
	for(i =0 ; i < size ;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted Array:- \n"); 
	for(i=0 ; i < size ;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	///bubble sorting the given array
	for(i=0 ; i< size;i++)
	{
		for(j= 0; j< size;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i]= arr[j];
				 arr[j]= temp;
			}
		}
	}
	printf("Sorted Array :- \n");
	for(i=0 ; i< size;i++)
	{
		printf("%d  ",arr[i]);
	}
        printf("\n");
	return 0;
}
