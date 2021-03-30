// Author: Ayush Bhat
// Creation Date:21/3/21
// Purpose Of The Program: addition of array elements
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  // main function body
{
    int a[10],i,n,sum=0;  //variable declaration
   
    printf("Enter size of the array : ");  //print Enter size of the array :
    scanf("%d",&n);  //takes size of array from user
 
    printf("Enter elements in array : ");  //print Enter elements in array :
    for(i=0; i<n; i++)  //for loop
    {
        scanf("%d",&a[i]); //takes a[i] from user
    }
 
    
    for(i=0; i<n; i++)  //for loop
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);  //print sum of array is :
 
    return 0;
}