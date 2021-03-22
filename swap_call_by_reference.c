// Author: Ayush Bhat
// Creation Date: 19/3/21
// Purpose Of The Program: Swapping of two numbers using  call by reference
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
 
void swap(int*, int*);  //variable declaration syntax
 
int main()  //main function body
{
   int x, y;  //variable declaration of integer data type
 
   printf("Enter the value of x and y\n");  //print Enter the value of x and y
   scanf("%d %d",&x,&y);  //takes valueof x and y from user
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y); //print Before Swapping
 
   swap(&x, &y); //swapping values
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);  //print After Swapping
 
   return 0;
}
 
void swap(int *a, int *b)  //variable declaration syntax
{
   int temp;  //variable declartion of integer data type
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
}