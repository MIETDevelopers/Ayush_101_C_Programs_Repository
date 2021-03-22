// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: To store information of a student using union
#include <stdio.h>   //preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <string.h>  //preprocessor directive to include "string.h" header file having string functions
 
union student 
{
            char name[20];  //variable dec zlaration of character data type
            char subject[20];  //variable declration of character data type
            float percentage;  //variable declaration of float data type
};
 
int main()  //main function body 
{
    union student record1;
    union student record2;
 
    // assigning values to record1 union variable
       strcpy(record1.name, "Raju");  //string copy record1.name
       strcpy(record1.subject, "Maths");  //string copy record1.subject
       record1.percentage = 86.50;
 
       printf("Union record1 values example\n");  //print Union record1 values example
       printf(" Name       : %s \n", record1.name);  //print Name
       printf(" Subject    : %s \n", record1.subject);  //print subject
       printf(" Percentage : %f \n\n", record1.percentage);  //print Pescentage
 
    // assigning values to record2 union variable
       printf("Union record2 values example\n");  //print Union record2 values example
       strcpy(record2.name, "Mani");  //string copy record2.name
       printf(" Name       : %s \n", record2.name); //print Name
 
       strcpy(record2.subject, "Physics");  //string copy record2.subject (physics)
       printf(" Subject    : %s \n", record2.subject);  //print Subject
 
       record2.percentage = 99.50;
       printf(" Percentage : %f \n", record2.percentage);  //print Percentage
       return 0;
}