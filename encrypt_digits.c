/* Kaitlyn Forsberg
 * This program accepts input from the user and encrypts the positive integers given by 
 * adding 6 to each digit and calculating the remainder of 10. It also switchs the first and last
 * digit after calculations were made */

#include <stdio.h>

//function declarations
void encrypt(int *a,int *b, int n);
void swap(int *p, int *q);

int main()
{
	int N, i, j;
	int p, q;	

	printf("Enter the number of digits of the input number: ");
	scanf("%d", &N);

	//requires user to input a positive number of digits	
	if (N < 0)
		return 0;

	int b[N], c[N];

	//stores the user's array into b and c. The c array is updated later. 
	printf("Enter the positive integer: ");
	for (i = 0; i < N; i++)
	{	
		scanf("%1d", &b[i]);
		c[i] = b[i]; 

	} //end for loop

	//calls function
	encrypt(b, c, N);
	
	//p equals first number in the array and q equals last number
	p = c[0];
	q = c[N-1];

	//calls function
	swap(&p, &q);

	//output first digit
	printf("%d", p);	

	//outputs middle numbers when N is more than 2
	if (N > 2)
	{
		for (j = 1; j < N-1; j++)
			printf("%d", c[j]);
	}
	
	//outputs last digit
	if (N > 1)
		printf("%d \n", q);

	return 0;	
} //end main

void encrypt(int *a, int *b, int n)
{
	int *p, *q;
	q = b;

	//stores new values of b
	for(p = a; p < (a + n); p++)
	{
		*q = ((*p) + 6) % 10;
		q++;
		
	} //end for loop	

} //end function


void swap (int *p, int *q)
{
	//switches first and last values
	int temp1, temp2;
	temp1 = *p;
	temp2 = *q;
	*q = temp1;
	*p = temp2;
	
} 
