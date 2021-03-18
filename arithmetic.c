// Author: Ayush Bhat
// Creation Date: 16/3/21
// Purpose Of The Program: Arithmetic operations using addition, subtraction, multiplication and remainder operator
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
 
int main()  // main function body
{
 // declaration of variables of int data type
    int num1, num2;  
    int sum, sub, mult, div;
 
    //print two numbers given by user
    printf("Enter two numbers: \n"); //print Enter two numbers:
    scanf("%d %d", &num1, &num2);  //taking input for num1 and  num2 from user
 
    sum = num1 + num2;   //Sum of two numbers
    printf("num1+num2 = %d\n", sum); //print sum of two numbers
 
    sub = num1 - num2;   //Subtraction of two numbers
    printf("num1 - num2 = %d\n", sub); //print subtraction of two numbers
 
    mult = num1 * num2;   //Multiplication of twi numbers
    printf("num1 * num2 = %d\n", mult);  //print multiplication of two numbers
 
    div = num1 / num2;   //Division of two numbers 
    printf("num1 / num2 = %d\n", div);  //print division of two numbers
    return 0;
}
