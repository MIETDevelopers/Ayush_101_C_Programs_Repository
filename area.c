#include<stdio.h>
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	return 0;
}