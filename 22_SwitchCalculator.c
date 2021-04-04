// Author: Ayush Bhat
// Creation Date: 19/3/21
// Purpose Of The Program: Write a C program to create Simple Calculator using switch case and function for every operation
#include<stdio.h>// preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  //main function body
    char operator;  //variable declaration of character data type
    double a, b;  //variable declaration of double(float) data type
    printf("Enter an operator (+, -, *, /):"); // print Enter an operater (+, -, *, /):
    scanf("%c", &operator); //It will scan the operater entered by user
    printf("Enter two operands:");  //print Enter two operands
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator) // start of Switch statement 
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");  //print Error encountered by the input values
    }
    return 0;
}