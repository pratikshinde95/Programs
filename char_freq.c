// to find the frequency of a character in  string


#include<stdio.h>
#include<stdio_ext.h>


int main(void)
{
	char arr[64];
	int i , j , count = 0;
	char c;

	printf("Enter The String :- ");// to take string from user
	scanf("%[^\n]s", arr);

	__fpurge(stdin);// clears the input buffer	
	
	printf("Enter the character to search :- ");// to read the character to be searched in string
	scanf("%c",&c);
	
	for(i=0 ;arr[i] != '\0';i++)
	{
		if(arr[i] == c)
		{
			count++;
		}
	}
	printf("%c occured %d times in given string\n",c, count);
	return 0;
}

	
