// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: to find whether number is prime or not
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  //main function body
{
   int n, i, count = 0;  //variable declaration, initialization of count
 
    printf("Enter the Number.\n");  //print Enter the Number
    scanf("%d",&n);//This will scan (read) the number entered by user.
 
 //start of for loop
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)  //Check for non prime number
        {
            count=1;
            break;
        }
    }
    //This will give the output
    if (count==0)
        printf("%d is a Prime number.",n);  //print number is prime number
    else
        printf("%d is not a Prime number.",n);  //print number is not a prime number
 
    return 0;
}