// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: Array of structures for student marks for each student and passing  it to function for various operations
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <string.h>  //preprocessor directive to #include "string.h" header file having string functions
 
struct student   //structure tag declaration (student) structure keyword(struct)
{
     int id;  //variable declaration of integer data type
     char name[30];  //variable declaration of character data type
     float percentage;   //variable declaration of float data type
};
 
int main()  //main function body
{
     int i; //variable declaration of integer data type
     struct student record[3];
 
     // 1st student's record
     record[0].id=1;
     strcpy(record[0].name, "Ishav");
     record[0].percentage = 99.0;
 
     // 2nd student's record         
     record[1].id=2;
     strcpy(record[1].name, "Aditya");
     record[1].percentage = 99.1;
 
     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "Himanish");
     record[2].percentage = 99.2;
 
     for(i=0; i<3; i++)  //for loop
     {
         printf(" Records of Student : %d \n", i+1);  //print Records of Student :
         printf(" Id is: %d \n", record[i].id);  //print ID is :
         printf(" Name is: %s \n", record[i].name);  //print Name is:
         printf(" Percentage is: %f\n\n",record[i].percentage);  //print Percentage is:
     }
     return 0;
}