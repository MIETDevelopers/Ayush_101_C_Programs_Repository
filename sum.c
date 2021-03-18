// Author: Ayush Bhat
// Creation Date: 16/3/21
// Purpose Of The Program: to find the sum of two numbers 
#include<stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main() {  //main function body
   int num1, num2, sum;   //variable declaration of integer data type
   printf("\nEnter two no: ");  //printing two numbers given by user
   scanf("%d %d", &num1, &num2);  //taking two numbers bfrom user
   sum = num1 + num2;  //sum of two numbers
   printf("Sum : %d", sum);  //printing the sum of two numbers
   return(0);
}
