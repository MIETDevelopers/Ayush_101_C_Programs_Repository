// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program:maximum of n numbers using for loop
#include <stdio.h> // preprocessor directive to include "stdio.h" header file having standard input and output functions

int main()  //main function body
{
  int i,num,n,large=0;  //variable declaration, intialization of large

  printf("How many numbers: ");  //print How many numbers:
  scanf("%d",&n);  //takes numbers from user
  
  //starting of for loop
  for(i=0; i<n; i++)
  {
    printf("\nEnter number %d: ",i+1);  //print Enter number :
    scanf("%d",&num);  //takes input from user
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); //print The Largrst number is 
  return 0;
}