/*	Kaitlyn Forsberg
 *	This program allows the user to input the length, number of elements in the array, and the number the user would like to search. Also, the program 	outputs the index of the value the user is searching.
 */
#include <stdio.h>

int search (int b[], int L, int value);

int main()
{
	int i, n;
	int N;
	int ind;

	printf("Enter the length of the array: ");
	scanf("%d", &N);

	int a[N];

	printf("Enter the elements of the array: ");
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	printf("Enter the value for searching: ");
	scanf("%d", &n);
	//calls search function
	ind =  search(a, N, n);
	printf("Output: %d \n", ind);	

	return 0;
} //end main

int search (int b[], int L, int value)
{
	//if value to be searched is not in the array then index = -1
	int index = -1;
	int z;
	
	//searches for the first case that a value in the array is equal to
	//the desired value by the user
	for (z = 0; z < L; z++)
	{
		if ((b[z] == value))
		{
			index = z;
			break;
		} 
	} //end for loop

return index;
} //end function
