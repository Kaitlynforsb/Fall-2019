/*	Kaitlyn Forsberg
 *	This program allows the user to input the length, the number of elements in an array, 
 *	and the value that the user wishes to delete within the array. The program outputs the
 *	values within the array after deleting the desired value. */

#include <stdio.h>
//function declarations
int search (int b[], int L, int value);
int delete (int c[], int K, int val);

int main()
{       
        int i, n, new, N, l;
        
        printf("Enter the length of the array: ");
        scanf("%d", &N);
        
        int a[N];       
 
        printf("Enter the elements of the array: ");
        for (i = 0; i < N; i++)
                scanf("%d", &a[i]);
        
        printf("Enter the value for deleting: ");
        scanf("%d", &n);
       
	//calls delete function
	new = delete(a, N, n);       
	printf("Output array: \n");
	//prints each value in the array after deletion
	for (l = 0; l < new; l++)
		printf("%d ", a[l]);

        return 0;
} //end main
//search function used in part1
int search (int b[], int L, int value)
{
	int index = -1;
        int z;
	//determines index of desired value
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
                                     
int delete (int c[], int K, int val)
{
	int e = 0;
	int d;
	int counter = 0;	

	//shifts values in the array if the desired value to delete is in the array 
	for (d = 0; d < K; d++)

	{
		if ((c[d] == val))
			counter++;
		else
			c[e++] = c[d];
	} //end for loop

	//returns adjusted length of array
	return ((K-counter));

} //end function                                                                                           31,1           8%
