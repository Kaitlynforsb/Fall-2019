/* Kaitlyn Forsberg
The following program takes user input for the day of the week and the number of days left until a certain homework assignment is due. 
It then outputs the day of the week the assignment is due and the number of days left. 
There are restrictions on the days homework can be due (none on Friday, Saturday, or Sunday) and the program takes this information
into account when outputting the due date and number of days left. */

#include <stdio.h>

int main (void)
{
	int day, days_left;

	printf("Please enter today's day of the week, between 0-6, with Sunday being 0: ");
	scanf("%d", &day);

	printf("Please enter the number of days remaining to do the work: ");
	scanf("%d", &days_left);

	// Exits the program if the input is not within the seven day range
	if (day > 6 || day < 0)
	{
		printf("Invalid range.");
		return 0;
	}

	/* The switch goes to each case based on what day of the week it is. The if else statements are used to 
	   determine the due date and numbers of days left, depending upon what day of the week it is. Case 0 = Sunday */
	switch (day)
	{
		case 0: 
			if (days_left % 7 == 0)
        		        printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
	       	 	else if (days_left % 7 == 1)
                		printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 2)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 3)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 4)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 5)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else
            			printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
			break;
		case 1:
			if (days_left % 7 == 0)
		                printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 1)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 2)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 3)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 4)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else if (days_left % 7 == 5)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else
            			printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
			break;
		case 2:
			if (days_left % 7 == 0)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 1)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 2)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 3)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else if (days_left % 7 == 4)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else if (days_left % 7 == 5)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
        		else
            			printf("The due date is Monday. The number of days left is %d\n", days_left);
			break;
		case 3:
			if (days_left % 7 == 0)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 1)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 2)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else if (days_left % 7 == 3)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else if (days_left % 7 == 4)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
        		else if (days_left % 7 == 5)
                		printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else
            			printf("The due date is Tuesday.. The number of days left is %d\n", days_left);
			break;
		case 4:
			if (days_left % 7 == 0)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 1)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else if (days_left % 7 == 2)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else if (days_left % 7 == 3)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
        		else if (days_left % 7 == 4)
                		printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 5)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else
            			printf("The due date is Wednesday. The number of days left is %d\n", days_left);
			break;
		case 5:
			if (days_left % 7 == 0)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
        		else if (days_left % 7 == 1)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else if (days_left % 7 == 2)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
        		else if (days_left % 7 == 3)
                		printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 4)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 5)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
       			else
            			printf("The due date is Thursday. The number of days left is %d\n", days_left);
			break;
		case 6:
			if (days_left % 7 == 0)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+2));
        		else if (days_left % 7 == 1)
                		printf("The due date is Monday. The number of days left is %d\n", (days_left+1));
        		else if (days_left % 7 == 2)
                		printf("The due date is Monday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 3)
                		printf("The due date is Tuesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 4)
                		printf("The due date is Wednesday. The number of days left is %d\n", days_left);
        		else if (days_left % 7 == 5)
                		printf("The due date is Thursday. The number of days left is %d\n", days_left);
        		else
            			printf("The due date is Monday. The number of days left is %d\n", (days_left+3));
			break;


	} //end switch


	return 0;
}
