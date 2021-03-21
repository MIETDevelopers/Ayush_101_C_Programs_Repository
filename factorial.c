// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: to find the factorial using loop
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()    //main function body
{    
 int i,fact=1,number;    //variable declaration of integer data type
 printf("Enter a number: ");    //print Enter a number
  scanf("%d",&number);    //taking a number from user for finding factorial
    for(i=1;i<=number;i++){    //using for loop to find factorial
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    //print the value of Factorial of number
<<<<<<< HEAD
return 0;
=======
return 0;  
>>>>>>> 4285b35e6f0239b968a08b64e439335cc4656493
