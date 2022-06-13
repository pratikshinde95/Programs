 // to reverse the given string


 #include<stdio.h>
 #include<string.h>
 
 void rev_str(char *str)
 {
 	int i , j ;
	char temp;
	int len = strlen(str);// to get the length of the string
	printf("%d",len);
	for(i =0 ; i<len/2 ; i++)// i < len/2 so that the for loop to swap the letter between the str
	{
		temp = str[i];
		str[i] = str[len -i -1];
		str[len-i-1]=temp;
	}
}
 int main(void)
 {
 	char str[64];
	printf("Enter String :- ");
	scanf("%[^\n]s",str);
	rev_str(str);
	printf("After Reverse :- %s\n",str);
	return 0;
}
 
