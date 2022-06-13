// to check endianess of a system


#include <stdio.h>

/* function to show bytes in memory, from location start to start+n*/
void memory_map(char *num , int size)
{
	int i;
	for(i=0 ; i < size ;i++)
	{
		printf(" %.2x",num[i]);
	}
	printf("\n");
	printf("Since the number is printing in ascending order the system is Little Endian\n");
}
 
/*Main function to call above function for 0x01234567*/
int main(void)
{
   int i = 0x55443322;
   memory_map((char *)&i, sizeof(i));
   return 0;
}
