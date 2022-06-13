// to swap two numbers

#include<stdio.h>

int main(void)
{
	int i , j;
	int temp =0;
	printf("Enter Two NUmber :- ");
	scanf("%d%d", &i ,&j);
	printf("Before swap :- %d   %d\n",i ,j);
	temp =i ;
	i =j ;
	j =temp;
	printf("after swap ;- %d    %d\n",i ,j);
	return 0;
}
