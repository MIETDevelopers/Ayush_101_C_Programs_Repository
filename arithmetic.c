#include <stdio.h>
 
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: \n");
 
    scanf("%d %d", &num1, &num2);
    result = num1 + num2;
    printf("num1+num2 = %d\n", result);
 
    result = num1 - num2;
  
    printf("num1 - num2 = %d\n", result);
 
    result = num1 * num2;
   
    printf("num1 * num2 = %d\n", result);
 
    result = num1 / num2;

    printf("num1 / num2 = %d\n", result);
    return 0;
}