// Author : Ayush Bhat
// Creation Date: 19-03-21
// Purpose :Binary search of number 
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  //main function body
{
  int c, first, last, middle, n, search, array[100];  //variable declaration of integer variable

  printf("Enter number of elements\n");  //print Enter number of elements
  scanf("%d", &n);  //takes number from user

  printf("Enter %d integers\n", n);  //print Enter integers

  for (c = 0; c < n; c++)  //for loop
    scanf("%d", &array[c]);  //takes input

  printf("Enter value to find\n");  //print Enter value to find 
  scanf("%d", &search);  //takes number which to be find

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {  //while loop
    if (array[middle] < search)  //if else statement
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;  //break the statement
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);  //print Not found number isn't present in the list

  return 0;
}