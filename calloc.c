// Author: Ayush Bhat
// Creation Date: 19/3/21
// Purpose Of The Program: To demonstrate the use of calloc()
#include <stdio.h>// preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h> //Using standard library header file.
    int main() {  //main function body
        int i, * ptr, sum = 0;  //variable declaration intialization of sum
        ptr = calloc(10, sizeof(int));
        if (ptr == NULL) {  
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Building and calculating the sequence sum of the first 10 terms \n "); //print Buildig and calculating the sequence sum of the first 10 terms
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;  //for loop
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);  //print sum
        free(ptr);
        return 0;
    }