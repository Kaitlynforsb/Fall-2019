
/* Kaitlyn Forsberg
This program will generate 3 of 14 possible numbers at random, given that the user inputs a sufficient balance. The numbers will be converted to the given symbols and these 3 symbols will be outputted after each "spin", or iteration of the while loop. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//constants
#define COST 5
#define WIN 100

int main ()
{
	srand(time(NULL));
	int balance, rand1, rand2, rand3;	
	int play_again = 1;
	//determines initial balance	
	printf("Please enter initial balance (in cents): ");
        scanf("%d", &balance);
	//condition to ensure the user inputs sufficient funds
	if (balance < 5)
		printf("Insufficient funds");

	
	while ((play_again == 1) && (balance >= 5)) 
	{	
		//creates 3 numbers at random, ranging from 0-13
		rand1 = (rand()%14);
		rand2 = (rand()%14);
		rand3 = (rand()%14);				

	//all switch statements determine the symbol for each randomly generated number. 
	switch (rand1)
	{
		case 0:
			printf("Pineapple ");
			break;
		case 1:
			printf("Kiwi ");
			break;
		case 2:
			printf("Apple ");
			break;
		case 3:
			printf("Orange ");
			break;
		case 4:
			printf("Lime ");
			break;
		case 5:
			printf("Peach ");
			break;
		case 6:
			printf("Lemon ");
			break;
		case 7:
			printf("Pear ");
			break;
		case 8:
			printf("Banana ");
			break;
		case 9:
			printf("Cherry ");
			break;
		case 10:
			printf("Grape ");
			break;
		case 11:
			printf("Blueberry ");
			break;
		case 12:
			printf("Blackberry ");
			break;
		case 13:
			printf("Apricot ");
			break;
	} //end switch

	
	switch (rand2)
        {
                case 0:
                        printf("Pineapple ");
                        break;
                case 1:
                        printf("Kiwi ");
                        break;
                case 2:
                        printf("Apple ");
                        break;
                case 3:
                        printf("Orange ");
                        break;
                case 4:
                        printf("Lime ");
                        break;
                case 5:
                        printf("Peach ");
                        break;
                case 6:
			 printf("Lemon ");
                        break;
                case 7:
                        printf("Pear ");
                        break;
                case 8:
                        printf("Banana ");
                        break;
                case 9:
                        printf("Cherry ");
                        break;
                case 10:
                        printf("Grape ");
                        break;
                case 11:
                        printf("Blueberry ");
                        break;
                case 12:
                        printf("Blackberry ");
                        break;
                case 13:
                        printf("Apricot ");
                        break;
	} //end switch

	switch (rand3)
        {
                case 0:
                        printf("Pineapple \n");
                        break;
                case 1:
                        printf("Kiwi \n");
                        break;
                case 2:
                        printf("Apple \n");
                        break;
                case 3:
                        printf("Orange \n");
                        break;
                case 4:
                        printf("Lime \n");
                        break;
                case 5:
                        printf("Peach \n");
                        break;
                case 6:
 			printf("Lemon \n");
                        break;
                case 7:
                        printf("Pear \n");
                        break;
                case 8:
                        printf("Banana \n");
                        break;
                case 9:
                        printf("Cherry \n");
                        break;
                case 10:
                        printf("Grape \n");
                        break;
                case 11:
                        printf("Blueberry \n");
                        break;
                case 12:
                        printf("Blackberry \n");
                        break;
                case 13:
                        printf("Apricot \n");
                        break;
	} //end switch

	//user wins $1 if all 3 randomized numbers are the same
	if (rand1 == rand2 && rand2 == rand3)
	{	
		balance += WIN;
 		printf("Congratulations! You won $1 \n");
	} //end if statement

	//updates balance
	balance -= COST;
	printf("Remaining balance: %d \n", balance);

	//asks whether user would like the program to be repeated	
	printf("Would you like to play again? Press 1 to play or 0 to quit.\n ");
	scanf("%d", &play_again);
	} //end while loop

	printf("Thank you for playing! \n");

	return 0;

} //end method

