//Bubble Sort

#include<stdio.h>
#define SIZE 5
#define SWAP(a,b) {int temp = a; a = b ; b = temp;}
void display(int arr[]);
void bubble(int arr[]);
int main(void)
{
	int i , j , count =0;
	int arr[5];
	printf("Enter Array Elements :- ");
	for(i=0 ; i < SIZE ;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsoretd Array :- ");
	display(arr);
	bubble(arr);
	printf("Sorted Array :- ");
	display(arr);
	return 0;
}
void display(int arr[])
{
	int i;
	//int size = (sizeof(arr)/sizeof(arr[i]));
	for(i =0 ;i < SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void bubble(int arr[])
{
	int i ,j;
	//int size = sizeof(arr)/sizeof(arr[i]);
	for(i =0 ; i < SIZE;i++)
	{
		for(j=0 ;j < (SIZE-1) ;j++)
		{	
			if(arr[j] > arr[j +1])
			{
				SWAP(arr[j], arr[j+1]);
			}
		}
	}
}

