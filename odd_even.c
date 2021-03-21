// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: to find the number is even or odd
#include <stdio.h>   // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main() {  //main function body
    int num;  //variable declaration of integer data type
    printf("Enter an integer: ");  //print Enter an integer 
    scanf("%d", &num);  //taking the number from user
    
    if(num % 2 == 0) //checking that the num is perfectly divisible by 2
        printf("%d is even.", num);  //print num is even
    else  //if the num is not perfectly divisible by 2
        printf("%d is odd.", num);  //print num is odd
    
    return 0;
}