/* Kaitlyn Forsberg
 * This program asks the user to input the name of the file and it extracts the first letter
 * of each string from the original file and writes it to a new file with the additional
 * extension ".dcf". */

#include <stdio.h>
#include <string.h>

//function declaration
void extract (char words[][101], int num_words, char *result);

#define N 100
#define WORDS 1000

int main()
{
	//creates a file pointer
	FILE *pFile1;
	FILE *pFile2;
	//saves name of input file 
	char p[N+1];
	//saves strings from input file - 1000 max strings with max length of 100 characters
	char str[WORDS][N+1];	
	int ch;
	int n = 0;
	//saves name of new output file 
	char new_File[N+1];
	char output[WORDS+1];	

	printf("Please enter the file name: ");

	//stores file name into array p 
	while((ch = getchar()) != '\n')	{
		p[n] = ch;
		n++; }	
	
	strcpy(new_File, p);
	strcat(new_File, ".dcf");
	
	//opens the given file that the user has input 	
	pFile1 = fopen(p, "r");
	pFile2 = fopen(new_File, "w");

	//determines whether pFile can open the file
	if (pFile1 == NULL) {
		printf("Error opening file");
		return 1; }
 
	//i saves number of strings in the file 
	int i = 0;
	//reads file until EOF
	while(!feof(pFile1)){
		if(fscanf(pFile1, "%s", str[i]) == 1) {
			i++;   	         	      }
			     }
		
	extract(str, i, output);

	printf("Output file name: %s \n", new_File);
	fputs(output, pFile2);
		       
	fclose(pFile1);
	fclose(pFile2);

	return 0;
} //end main

void extract (char words[][101], int num_words, char *result)
{
	int i;

	//saves the first letter of each string into result 
	for (i = 0; i < num_words; i++) {
		*result = words[i][0];
		result++;		}		

} //end function 

