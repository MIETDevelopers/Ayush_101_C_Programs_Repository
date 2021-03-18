// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: to find area and perimeter of circle, square and rectangle
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions
int main(){  //main funnction body
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;  //variable declaration of float data type
	
	//variable initialization
	radiusofCircle=5;
	sideofSquare=4;
	lengthofRectangle=6;
	breadthofRectangle=3;
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));   //print Area of Cricle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));  //print Perimeter of circle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));  //print Area of Square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));  //print Perimeter of Square
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));  //print Area of Rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));  //print Perimeter of Rectangle
	return 0;
}
