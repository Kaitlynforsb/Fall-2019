/* Kaitlyn Forsberg
This program accepts user input and outputs the integers from the input
 */
#include <stdio.h>

int main()
{
	char ch;	
 
	printf("Please enter a string of characters: \n");

	//if user's first character is a space, then this while loop ensures that it is skipped        
	while ((ch = getchar()) == ' ')
		;

	//this while loop is used to read characters that are not spaces
	while (ch != '\n') 
	{
		//if the input is an integer, then it will be outputted
		if (ch >= '0' && ch <= '9')
			printf("%c", ch);	

		//ensures that all spaces are skipped and calls getchar to read next character
		while ((ch = getchar()) == ' ')
			;	
	
	}  //end while loop

	return 0;

} //end main
