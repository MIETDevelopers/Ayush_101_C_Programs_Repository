#include<stdio.h>
int main() {
   int num1, num2, subtract;
   printf("\nEnter two no: ");
   scanf("%d %d", &num1, &num2);
   subtract = num1 - num2;
   printf("subtract : %d", subtract);
   return(0);
}