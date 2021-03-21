// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: To find max element and index in array
#include<stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  //main function body
	//variable declaration
	int i; 
	float arr[5]; 

	printf("Please enter five numbers:\n ");  //print Please enter five numbers:

	for (i = 0; i < 5; ++i) //Using for loop.
	{
    scanf("%f", &arr[i]);//Scanning the user entered values
	}

		for (i = 1; i < 5; ++i)  //start of for loop
		{
			//Determing the largest value.
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest value = %.2f", arr[0]);//print the largest value.

	return 0;
}