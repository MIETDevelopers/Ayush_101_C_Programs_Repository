// Author : Ayush Bhat
// Creation Date: 19-03-21
// Purpose : Addition Of Matrix 2D
#include <stdio.h> // Pre-Processive to include Standard input and out header files funtions
int main() // main function body 
{
	int a[2][3],b[2][3],c[2][3],i,j; //variable declaration
	printf("\nENTER VALUES FOR MATRIX A:\n"); //print ENTER VALUES FOR MATRIX A:
	for(i=0;i<2;i++) // for loop 
		for(j=0;j<3;j++) // for loop 
			scanf("%d",&a[i][j]); // taking input from user
	printf("\nENTER VALUES FOR MATRIX B:\n");  //print ENTER VALUES FOR MATRIX B:
	for(i=0;i<2;i++)// for loop 
		for(j=0;j<3;j++)// for loop 
			scanf("%d",&b[i][j]);// taking input from user
	for(i=0;i<2;i++)// for loop 
		for(j=0;j<3;j++)// for loop 
			c[i][j]=a[i][j]+b[i][j]; 
	printf("\nTHE VALUES OF MATRIX C ARE:\n"); //print ENTER VALUES OF MATRIX C: 
	for(i=0;i<2;i++)  //for loop
        {
		for(j=0;j<3;j++) //for loop 
			printf("%5d",c[i][j]); // Printing the matrix 
		printf("\n");  //printing new line
	}
	return 0; 
}