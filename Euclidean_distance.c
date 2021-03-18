// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program:To find the Eucledian distance between two points
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
#include<math.h>  // preprocessor directive to include "math.h" header file having math functions
  
int main()  // main function body
{  
    float x1, y1, x2, y2, distance;  //variable declaration of float data type
 
  //taking first point's coordinate
    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f%f", &x1, &y1);  
  
  //taking second point's coordinate
    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f%f", &x2, &y2);  
  
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );  //calculating distance
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);  //display result
  
    return 0;  
}  
