// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: Program for reading and writing the student marks data to files
#include <stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h>  // preprocessor directive to include "string.h" header file having standard library functions
struct s {
	//Creating a user defined data type using structures.
	char name[50]; //variable declaration of character data type
	int RollNo;  //variable declaration of integer data type
	int Marks;  //variable declaration of integer data type
};
int main() {  //main function body
	struct s a[10],b[10];  
	FILE *fptr;
	int i;
	fptr=fopen("Desktop\\C_Repositories\\Ayush_101_C_Programs_Repository\\0_ReadWriteFile.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {  //for loop
		fflush(stdin);
		//Scanning the entered Values.
		printf("Enter Name: ");  //print Enter Name:
		gets(a[i].name);
		printf("Enter Roll Number: ");  //print Enter Roll Number:
		scanf("%d",&a[i].RollNo);  //takes Roll number from user
		printf("Enter Marks: ");  //print Enter Marks:
		scanf("%d",&a[i].Marks);  //takes marks from user
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("Desktop\\C_Repositories\\Ayush_101_C_Programs_Repository\\0_ReadWriteFile.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");  //print Entered details are:
	for (i=0;i<1;++i) {  //for loop
		printf("Name: %s\n	Roll Number: %d\n	Marks: %d",b[i].name,b[i].RollNo,b[i].Marks);  //print Name: Roll Number  Marks
	}
	fclose(fptr); //Closing the program.
}