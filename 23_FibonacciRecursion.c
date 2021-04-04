// Author: Ayush Bhat
// Creation Date: 16/3/21
// Purpose Of The Program: fibonacci recursion
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
void printFibonacci(int n){  //function body  
    static int n1=0,n2=1,n3;  //variable declaration
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);   //print n3
         printFibonacci(n-1);    
    }    
}    
int main(){  //main function body
    int n;    //varable declaration
    printf("Enter the number of elements: ");  //print Enter the number of a elements
    scanf("%d",&n);   //takes number from user
    printf("Fibonacci Series: ");   //print fibonacci series
    printf("%d %d ",0,1);   //print 0, 1
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 }    