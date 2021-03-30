// Author:Kavya Dhar
// Creation date: 21/03/21
// C program to write msv file
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions

// Driver Code
int main()  //main function body
{
	// Substitute the file_path string
	// with full path of CSV file
	FILE* fp = fopen("file_path", "a+");

	//variable declaration
	char name[50];
	int accountno, amount;

	if (!fp) {   //if statement
		// Error in file opening
		printf("Can't open file\n");  //print Can't open file
		return 0;
	}

	// Asking user input for the
	// new record to be added
	printf("\nEnter Account Holder Name\n");  //print Enter Account Holder Name
	scanf("%s", &name);  //takes name from user
	printf("\nEnter Account Number\n");  //print Enter Account Number
	scanf("%d", &accountno);  //takes accountno from user
	printf("\nEnter Available Amount\n");  //print Enter Available Amount
	scanf("%d", &amount);  //takes amount from user

	// Saving data in file
	printf(fp, "%s, %d, %d\n", name,accountno, amount);

	printf("\nNew Account added to record");  //print New Account added to record

	fclose(fp);
	return 0;
}