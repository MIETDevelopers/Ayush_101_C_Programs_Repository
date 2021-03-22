// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: Program to read and write in a file
#include <stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h>   // preprocessor directive to include "stlib.h" header file having standard library functions
struct s {
	//Creating a user defined data type using structures.
	char text[1000];  //variable declaration of character data type
	};
 int main(){  //main function body
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("Desktop\\C_Repositories\\Ayush_101_C_Programs_Repository\\0_ReadWriteFile.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //Scanning the entered text.
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("Desktop\\C_Repositories\\Ayush_101_C_Programs_Repository\\0_ReadWriteFile.txt","wb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");  //print Entered details are:
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //Printing the entered text.
	}
	fclose(fptr); //Closing the program.
}