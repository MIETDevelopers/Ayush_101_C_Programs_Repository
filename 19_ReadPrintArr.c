// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program:Read and write an array
#include <stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h>   // preprocessor directive to include "stdlib.h" header file having standard library functions
struct s {    //varible declaration of structure data type
	//Creating a user defined data type using structures.
	char text[1000];  //variable declaration of character data type
	};
 int main(){  //main function body
	struct s a[1000],b[1000];  //varible declaration of structure data type
	FILE *fptr;
	int i;  //variable declaration of integer data type
	fptr=fopen("C:\\Users\\CAIP\\Desktop\\C_Programs\\Akhil_104_C_Prorgams_Repository\\019readwrite_array.c","wb");
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");  //print Enter Text:
		gets(a[i].text); //Scanning the entered text.
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\CAIP\\Desktop\\C_Programs\\Akhil_104_C_Prorgams_Repository\\019readwrite_array.c","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");  //print Entered Details are
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //Printing the entered text.
	}
	fclose(fptr); //Closing the program.
}
