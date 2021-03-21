// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: to print fibonacci sequence using for loop
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
 
int main ()  //main function body
{

  int first = 0, second = 1, third, i, n; //varible declaration and intialazation(first, second)
 
  printf ("Enter the length of the fibonacci series \n");  //print Enter the length of fibonacci series
 
  scanf ("%d", &n);  //takes input from user
 
   printf("  The Fibonacci Series is:");  //print The Fibonacci Series
    printf("  \n %d \n %d",first,second);  //print first and second number of series
 
 //starting of for loop
  for (i = 2; i <= n; i++)  
 
    {
 
      third = first + second;
 
      printf ("\n %d ", third);
 
      first = second;
 
      second = third;
 
    }
 
  return 0;
}