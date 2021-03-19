// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: Arithmetic operation using remainder operator
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main() {  //main function body
    int dividend, divisor, quotient, remainder;  //variable declaration of integer data type
    printf("Enter dividend: ");  //print Enter divident:
    scanf("%d", &dividend);  //takes divident from user
    printf("Enter divisor: ");  //print Enter divisor:
    scanf("%d", &divisor);  //takes divisor from user

    quotient = dividend / divisor;  // Computes quotient

    remainder = dividend % divisor; //Computes remainder

    printf("Quotient = %d\n", quotient);  //print Quotient
    printf("Remainder = %d", remainder);  //print Remainder
    return 0;
}