// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: Searching an element in an array using linear search
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  // main function body
{
    int a[20],i,x,n; //varible declaration of integer data type
    printf("How many elements?");  //print How many elements?
    scanf("%d",&n);  //takes number of elements from user
     
    printf("\nEnter array elements:");  //print Enter array elements
    for(i=0;i<n;++i)  //start of for loop
        scanf("%d",&a[i]); //takes a[i] from user
     
    printf("\nEnter element to search:");  //print Enter element to search
    scanf("%d",&x);  //takes value of x from user
     
    for(i=0;i<n;++i)  //start of for loop
        if(a[i]==x)
            break;
     
    if(i<n)  //if-else statement(decision making)
        printf("Element found at index %d",i);  //print Element found at index 
    else
        printf("Element not found");  //print Element not found
  
    return 0;
}