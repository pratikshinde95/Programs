//program to find the string length

#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int i;

  printf("Enter the string: ");
  scanf("%[^\n]s", str);

  for(i=0; str[i] != '\0'; ++i);

  printf("Length of Entered String is :-  %d\n", i);

  return 0;
  }
