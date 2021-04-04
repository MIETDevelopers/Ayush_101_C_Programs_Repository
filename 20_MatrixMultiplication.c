// Author: Ayush Bhat
// Creation Date: 18/3/21
// Purpose Of The Program: Program to perform  matrix multiplication
#include<stdio.h>    // preprocessor directive to include "stdio.h" header file having standard input and output function
int main(){  //main funtion body
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;  //varible declaration of integer data type
	printf("\nEnter the number of row=", r);  //print Enter the number of row=   
	scanf("%d",&r);  //takes number of rows from user  
	printf("\nEnter the number of column=", c);  //print Enter the number of column=
	scanf("%d",&c);  //take number of column from user
	printf("\nEnter the first matrix element=\n"); //print Enter the first matrix element=
		for(i=0;i<r;i++) //for loop 1
		{    
			for(j=0;j<c;j++) //for loop 2
			{    
				scanf("%d",&a[i][j]);//takes input(a[i][j]) from user
			}    
		}    
	printf("\nEnter the second matrix element=\n"); //print Enter the second matrix element=
	for(i=0;i<r;i++) //for loop 3
	{    
		for(j=0;j<c;j++) //for loop 4
		{    
		scanf("%d",&b[i][j]); //takes input(b[i][j]) from user
		}    
	}    
	
	printf("\nMultiply of the matrix=\n"); //print Multiply of the matrix
	for(i=0;i<r;i++) //for loop 5
	{    
		for(j=0;j<c;j++) //for loop 6
		{    
			mul[i][j]=0;    
			for(k=0;k<c;k++) //for loop 7
			{    
				mul[i][j]+=a[i][k]*b[k][j];  //calculating  
			}    
		}		    
	}    
	//for printing result    
	for(i=0;i<r;i++) //for loop 8
	{    
		for(j=0;j<c;j++) //for loop 9
		{    
			printf("%d\t",mul[i][j]); //print value of mul[i][j]
		}    
	printf("\n");  //prints new line
	}    
	return 0;  
}  