// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: Print numbers from 1 to 5
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  //main function body
{
    int i = 1;  //variable declaration of integer data type
    
    while (i <= 5)
    {
        printf("%d\n", i);  //prints number
        ++i;
    }

    return 0;
}