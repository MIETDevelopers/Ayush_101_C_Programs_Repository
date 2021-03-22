// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: To demonstrate the use of various string operations
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
void displayString(char str[]); 

int main()  //main function body
{
    char str[50];  //variable declaration of character data type
    printf("Enter String: \n");  //print Enter String
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
	//This will give output.
    printf("String Output: ");
    puts(str);
}