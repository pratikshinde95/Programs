// to check header files, data section of a program
#include<stdio.h>

int main(void)
{
	int num1 , num2 ;
	printf("Enter Numbers :- ");
	scanf("%d %d", &num1 , &num2);
	printf("%d + %d = %d\n",num1 , num2 , num1+num2);
	return 0;
}
/* Commands
objdump -h header.out    --- to view header file
objdump -t header.out   --- to view text section
objdump -s header.out   --- to view symbol table



*/
