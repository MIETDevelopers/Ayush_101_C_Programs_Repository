// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: To read and write marks
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main() {  //main function body
	char name[50];  //variable declaration of character data type
	int marks,i,n;  //variable declaration of integer data type
	printf("Enter number of students: ");  //print Enter number of students
	scanf("%d",&n);  //takes input from user
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");  //print Error
		exit(1);
	}
	for (i=0;i<n;++i) {  //for loop
		printf("For student%d\nEnter name: ",i+1);  //print For student   Enter name
		scanf("%s",name);  //takes name from user
		printf("Enter marks: ");  //print Enter marks
		scanf("%d",&marks);  //takes marks from user
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}