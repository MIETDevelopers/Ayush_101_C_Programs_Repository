// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: 
#include <stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main()  //main function body
{
    int n, i, j, temp;  //variable declaration
    int arr[64]; //variable (array with 64 elements) declaration

    //This will determine the limit of values according to user input
    printf("Enter number of elements\n");  //print Enter number of elements
    scanf("%d", &n);  //takes number of elements from user
 
    printf("Enter %d integers\n", n);  //print Enter integer
    for (i = 0; i < n; i++)  //starting of for loop
    {
        scanf("%d", &arr[i]);  //takes arr[i] from user
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");  //print Sorted list in ascending order:
    for (i = 0; i <= n - 1; i++)  //start of for loop
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}