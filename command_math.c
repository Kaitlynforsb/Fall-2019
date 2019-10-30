/* Kaitlyn Forsberg
 * This program accepts as command line arguments four math operations (+, -, x, /) and two integers
 * and displays the result of the two integers after being calculated with the math operation. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//four math operations available
#define NUM_SIGNS 4

int main (int argc, char *argv[])
{
	int j, ans;

	char *signs[] = {"+", "-", "x", "/"};

	//strcmp determines which math operation will be used. The first command line argument given is compared to 
	//one of the four available math operations and if the command line argument is the same as
	//the sign in one of the if statements then that math operation will be used on the two integers given
	//through the arguments. The atoi function is used to convert a string to an integer.
	for (j = 0; j < NUM_SIGNS; j++) 
	{	if (strcmp(argv[1], signs[0]) == 0)
			ans = (atoi(argv[2]))+(atoi(argv[3]));
		else if (strcmp(argv[1], signs[1]) == 0)
			ans = (atoi(argv[2]))-(atoi(argv[3]));
		else if (strcmp(argv[1], signs[2]) == 0)
			ans = (atoi(argv[2])) * atoi((argv[3]));
		else if (strcmp(argv[1], signs[3]) == 0)
			ans = (atoi(argv[2])) / (atoi(argv[3]));
			}					

	printf("Output: %d \n", ans);
		
	return 0;		

} //end main
