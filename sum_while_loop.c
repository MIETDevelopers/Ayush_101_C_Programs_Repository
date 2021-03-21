// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: Calculate sum of digits of a number using while loop
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  // main function body
{  
  int Number, Reminder, Sum=0;  //variable declaration, intialization of sum

  printf("Please Enter any number\n");  //print Please Enter any number
  scanf("%d", &Number);  //takes number from user

  while(Number > 0)//Using while loop.
  {
  	//This is the formula to calculate sum of digits
     Reminder = Number % 10;
     Sum = Sum+Reminder;
     Number = Number / 10;
  }

  printf("Sum of the digits of Given Number = %d\n", Sum);  //print Sum of two digits of Given Number = 

  return 0;
}