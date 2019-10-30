#include <stdio.h>

int main(void)

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

{

	int num_quarters;
	int num_dimes;
	int num_nickels;
	int num_pennies;
	int total_amount;
	
	printf("please enter the number of quarters: ");
	scanf("%d", &num_quarters);

	printf("please enter the number of dimes: ");
	scanf("%d", &num_dimes);

	printf("please enter the number of nickels: ");
	scanf("%d", &num_nickels);
 
	printf("please enter the number of pennies: ");
	scanf("%d", &num_pennies);

	total_amount = num_quarters * QUARTER + num_nickels * NICKEL + num_dimes * DIME +  num_pennies * PENNY;
 
	printf("The total amount in cents is %d\n", total_amount);

	double dollar_amount = (total_amount/100.00);

	printf("the total amount is %.2f dollars \n", dollar_amount);
	
	return 0;

}
