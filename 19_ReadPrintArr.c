// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: To read and print elements in two dimensional array
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  //main function body
   int disp[2][3];  //variable(2D array) declaration of integer data type
   int i, j;  //variable declaration of integer data type
   for(i=0; i<2; i++) {  //for loop1
      for(j=0;j<3;j++) {  //for loop2
         printf("\nEnter value for disp[%d][%d]:", i, j);  //print Enter value for disp
         scanf("%d", &disp[i][j]);  //takes varible from user
      }
   }
   //Displaying array elements
   printf("\nTwo Dimensional array elements:\n");
   for(i=0; i<2; i++) {  //for loop3
      for(j=0;j<3;j++) {  //for loop4
         printf("%d ", disp[i][j]);  //print array elements
         if(j==2){
            printf("\n");  //print new line
         }
      }
   }
   return 0;
}