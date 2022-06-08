// to print fibonacci series

#include<stdio.h>

int fib(int a);

int main(void)
{
	int i ;
	long long int result =0;
	printf("Enter number:-");
	scanf("%d",&i);
	result = fib(i);
	printf("%lld\n",result);
	return 0;
}

int fib(int a)
{
	if(a<=1)
		return a;
	return fib(a-1)+fib(a-2);
}
