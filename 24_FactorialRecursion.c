// Author: Ayush Bhat
// Creation Date: 19/3/21
// Purpose Of The Program: Factorial using recursion
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
	long int multiplyNumbers(int n);  //variable declaration
	int main() {  //main function body
    	int n;  //variable declaration of integer data type
    	printf("Enter a positive integer: ");  //print Enter a positive integer:
    	scanf("%d",&n);  //takes an integer from user
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));  //print Factorial of multiplyNumbers
    	return 0;
	}

	long int multiplyNumbers(int n) {  //variable declaration
    	if (n>=1)  //if else statement (decision making)
        	return n*multiplyNumbers(n-1);  //returning value
    	else
        	return 1;
}