#include <stdio.h>
 
int main()
{
    int num1, num2;
    int sum, sub, mult, div;
    printf("Enter two numbers: \n");
 
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;   //Sum of two numbers
    printf("num1+num2 = %d\n", sum);
 
    sub = num1 - num2;   //Subtraction of two numbers
  
    printf("num1 - num2 = %d\n", sub);
 
    mult = num1 * num2;   //Multiplication of twi numbers
   
    printf("num1 * num2 = %d\n", mult);
 
    div = num1 / num2;   //Division of two numbers

    printf("num1 / num2 = %d\n", div);
    return 0;
}
