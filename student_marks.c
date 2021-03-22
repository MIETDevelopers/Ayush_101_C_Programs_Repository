// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: To store the information of student marks using structures and find total marks of individual student
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  // main function body

struct student {   //structure tag declaration (student) structure keyword(struct)
	//from line 9 to 12 are called members or field of structure
    char name[50];  //variable declaration of character data type
    int roll;  //variable declaration of integer data type
    float attendance; //variable declaration of float data type
    float marks;  //variable declaration of float data type
} s;

int main() {  //main function body
    //This will read the user input.
    printf("Enter information:\n");  //print Enter information:
    printf("Enter name: ");  //print Enter name:
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");  //print Enter roll number
    scanf("%d", &s.roll);  //takes roll number from user
    printf("Enter marks: ");   //print Enter marks
    scanf("%f", &s.marks);   //takes marks from ussser
    printf("Attendance: ");   //print Attendance
    scanf("%f", &s.attendance);   //takes attendance from user

    //This will print the user input.
    printf("Displaying Information:\n");  //print Displaying Information:
    printf("Name: ");  //print Name:
    printf("%s", s.name);  //print name
    printf("Roll number: %d\n", s.roll);  //print Roll number
    printf("Marks: %.1f\n", s.marks);  //print Marks
    printf("Attendance: %.1f\n;",s.attendance);  //print Attendance
    return 0;
	}
}