#include "stdio.h"
#define MAXLENGTH 60000

int myStrstr(const char strOne[], const char strTwo[]);

int main() 
{
	char firstString[MAXLENGTH];
 	char secondString[MAXLENGTH];
	char result;

	printf("1) the Second String will be searched in the first String so you moust choose first string larger than that one.\n");
	printf("2) This operation is case sensitive.\n");
	printf("3) Counting is from zero.\n\n");

	printf("Please enter first String: ");
	gets(firstString) ;
	printf("Please enter second String: ") ;
      	gets(secondString);
      	
	result = myStrstr (firstString, secondString);
      	if (result == -1) 
        	printf("\t'%s' not found\n", secondString);
	else 
		printf("\t'%s' is founded in %dn cell\n", secondString, result);

	return 0;
}

int myStrstr(const char strOne[], const char strTwo[])
{
	int i, j;
 	for (i=0 ; strOne[i]; i++) 
		if (strOne[i] == strTwo[0]) {
        		for (j=1; strTwo[j] && strOne[i+j] == strTwo[j] ; j++);
        		if (!strTwo[j])  return (i);
		}
	return (-1);
}


