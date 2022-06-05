// to print the value of static and auto variablews before initializing
// with some value and carrying out the operation.
#include<stdio.h>

int main(void)
{
	static int a;
	int b;
	printf("static :- %d\n",a);
	printf("auto :- %d\n",b);
	printf("static a :- %d + auto b :- %d =  %d\n" , a ,b ,a+b);
	printf("Enter Two Numbers : ");
	scanf("%d %d",&a,&b);
	printf("result :- %d\n",a+b);
	return 0;

}
