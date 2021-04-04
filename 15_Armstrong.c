// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: Check no. is armstrong or not using while loop
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main() {  //main function body
  int num, originalNum, remainder, result = 0;  //variable declaration, intialization of result
  printf("Enter a three-digit integer: \n");  //print Enter a three-digit integer:
  scanf("%d", &num);  //takes number from user
  originalNum = num;

//start of while loop
  while (originalNum != 0) {
    remainder = originalNum % 10;  //it (reminder) contains last digit
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)
      printf("%d is an Armstrong number.", num);  //print 'number' is an armstrong number
  else
      printf("%d is not an Armstrong number.", num);  //print 'number' is not an armstrong number

  return 0;
}