// Author:Kavya Dhar
// Creation date: 21/03/21
// C program for Reading CSV files (Comma sepaarated files)
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <string.h>  // preprocessor directive to include "string.h" header file having standard string functions
#include <stdlib.h>  // preprocessor directive to include "stdlib.h" header file having standard library functions


void read_csv(int row, int col, char *filename, double **data){  //void function body
	FILE *file;
	file = fopen(filename, "r");

	//variable declaration 
	int i = 0;  
    char line[4098];
	while (fgets(line, 4098, file) && (i < row))
    {
    	// double row[ssParams->nreal + 1];
    	//variable declaration 
        char* tmp = strdup(line);
        //variable declaration 
	    int j = 0;
	    const char* tok;
	    for (tok = strtok(line, "\t"); tok && *tok; j++, tok = strtok(NULL, "\t\n")) //for loop
	    {
	        data[i][j] = atof(tok);
	        printf("%f\t", data[i][j]);  //print data[i][j]
	    }
	    printf("\n");  //print new line

        free(tmp);
        i++;
    }
}

int main(int argc, char const *argv[])  //main function body
{
	/* code */
	if (argc < 3){
		printf("Please specify the CSV file as an input.\n");  //print Please specify the CSV file as an input.
		exit(0);
	}

	//variable declaration
	int row     = atoi(argv[1]);
	int col     = atoi(argv[2]);
	char fname[256];	strcpy(fname, argv[3]);

	double **data;
	data = (double **)malloc(row * sizeof(double *));
	for (int i = 0; i < row; ++i){  //for loop
		data[i] = (double *)malloc(col * sizeof(double));
	}

	read_csv(row, col, fname, data);

	return 0;
}