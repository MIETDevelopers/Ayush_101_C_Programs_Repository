// Author: Ayush Bhat
// Creation Date: 21/3/21
// Purpose Of The Program: calloc malloc and free function
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h>  // preprocessor directive to include "stdlib.h" header file having standard library functions
  
int main()  //main function body
{
  
    // This pointer will hold the
    // base address of the block created
    //variable declaration of integer data type
    int* ptr;
    int n, i;
  
    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);  //print Enter number of elements:
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");  //print Memory not allocated
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");  //print Memory successfully allocated using malloc.
  
        // Get the elements of the array
        for (i = 0; i < n; ++i) {  //for loop
            ptr[i] = i + 1;
        }
  
        // Print the elements of the array
        printf("The elements of the array are: ");  //print The elements of the array are:
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);  //print ptr[i]
        }
    }
  
    return 0;
}