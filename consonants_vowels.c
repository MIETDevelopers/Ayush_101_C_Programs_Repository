// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program:To find whether the alphabet is vowels or consonants
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
 
int main()  //main function body
{
  char ch; //variable declaration of character variable
 
  printf("Input a character\n");  //print Input a character
  scanf("%c", &ch);  //taking a character from user
 
 //using switch statement
  switch(ch)   
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", ch);  //print alphabet is vowel 
      break;  //breaks the switch statement
    default:  //if switch statement is not satisfied then go to default statement
      printf("%c is a consonant.\n", ch);  //print alphabet is consonants
  }              
 
  return 0;
}