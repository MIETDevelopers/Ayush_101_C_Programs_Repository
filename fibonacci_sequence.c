#include<stdio.h>
 
int main ()
{
 
  int first = 0, second = 1, third, i, n;
 
  printf ("Enter the length of the fibonacci series \n");
 
  scanf ("%d", &n);
 
   printf("  The Fibonacci Series is:");
    printf("  \n %d \n %d",first,second);
 
  for (i = 2; i <= n; i++)
 
    {
 
      third = first + second;
 
      printf ("\n %d ", third);
 
      first = second;
 
      second = third;
 
    }
 
  return 0;
 
}