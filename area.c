// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program:To find the area of circle, square and rectangle based on user choice
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  // main function body
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;  //declaration of variables of float data type
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);  //taking input from user
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));  //printing Area of circle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));  //printing area of square
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));  //area of rectangle
	return 0;
}
