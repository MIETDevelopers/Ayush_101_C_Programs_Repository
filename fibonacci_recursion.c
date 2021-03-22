// Author: Ayush Bhat
// Creation Date: 17/3/21
// Purpose Of The Program: Fibonacci sequence using recursion
#include<stdio.h>  // preprocessor directive to include "stdio.h" header file having standard input and output functions  
int main(){    //main function body
	int n1=0, n2=1, n3, i, number=0;    //variable declaration of integer data type
	printf("Enter the number of elements: ");   //print Enter the numbers of elements
	scanf("%d",&number);   //takes number from user
	printf(" %d %d",n1,n2);//print value of n1 and n2
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}
	return 0;  
}


