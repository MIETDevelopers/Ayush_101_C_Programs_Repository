#include <stdio.h>
 
int main()
{
    int a = 10, b = 4, result;
    printf("a is %d and b is %d\n", a, b);
 
    result = a + b;
    printf("a+b = %d\n", result);
 
    result = a - b;
    printf("a-b = %d\n", result);
 
    result = a * b; // multiplication
    printf("a*b = %d\n", result);
 
    result = a / b;
    printf("a/b = %d\n", result);
    return 0;
}