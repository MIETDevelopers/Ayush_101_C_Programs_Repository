// Author: Ayush Bhat
// Creation Date: 19/3/21
// Purpose Of The Program: To demonstrate the use of malloc() and free()
#include <stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include <stdlib.h>  //Using standard library header file

int main()  //main function body
{
    int n, i, *ptr, sum = 0;  //variable declaration of integer data type

    printf("Enter number of elements: ");  //print Enter number of elements
    scanf("%d", &n);  //takes number of elements from user

    ptr = (int*) malloc(n * sizeof(int));
 
    // if memory cannot be allocated
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");  //print Error! memory not allocated.
        exit(0);
    }

    printf("Enter elements: ");  //print Enter elements:
    for(i = 0; i < n; ++i)  //for loop
    {
        scanf("%d", ptr + i);  //takes ptr + i
        sum += *(ptr + i);  //adding
    }

    printf("Sum = %d", sum);  //print Sum of numbers
  
    // deallocating the memory
    free(ptr);

    return 0;
}