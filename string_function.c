// Author : Ayush Bhat
// Creation Date: 20-03-21
// Purpose : String implementation in C programming

/*The nine most commonly used functions in the string library are:
strcat - concatenate two strings
strchr - string scanning operation
strcmp - compare two strings
strcpy - copy a string
strlen - get string length
strncat - concatenate one string with part of another
strncmp - compare parts of two strings
strncpy - copy part of a string
strrchr - string scanning operation */

// C String function – strlen
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()  //main function body
{
     char str1[20] = "Ayush";  //variable declaration of character  data type
     printf("Length of string str1 when maxlen is 30: %d", strnlen(str1, 30));  //print Length of sting str1 when maxlen is 30:
     printf("Length of string str1 when maxlen is 10: %d", strnlen(str1, 10));  //print Length of string str1 when maxlen is 10:
     return 0;
}
// C String function – strcmp
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()  //main function body
{
     //variable declaration of character  data type
     char s1[20] = "Ayush";
     char s2[20] = "Ayush Bhat ";
     if (strcmp(s1, s2) ==0)  //if else statement
     {
        printf("string 1 and string 2 are equal");  //print string 1 and string 2 are equal
     }else
      {
         printf("string 1 and 2 are different");  //print string 1 and 2 are different
      }
     return 0;
}
//C String function – strcat
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()  //main function body
{
     //variable declaration of character  data type
     char s1[10] = "Hello";
     char s2[10] = "World";
     strcat(s1,s2); 
     printf("Output string after concatenation: %s", s1);  //print Output string after concatenation:
     return 0;
}
//C String function – strcpy
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()  //main function body
{
    //variable declaration of character  data type
     char s1[30] = "string 1";
     char s2[30] = "string 2 : I’m gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);  //print String s1 is:
     return 0;
}
//C String function – strchr
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()  //main function body
{
    //variable declaration of character  data type
     char mystr[30] = "I’m an example of function strchr";
     printf ("%s", strchr(mystr, 'f'));  //print strchr
     return 0;
}
//C String function – strstr
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions 
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
int main()
{
     char inputstr[70] = "String Function in C at Ayush Bhat ";
     printf ("Output string is: %s", strstr(inputstr, 'Ayush'));
     return 0;
}