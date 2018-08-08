
//C program to print Pascal triangle
#include <stdio.h>
 
int factorial(int n){
    int a;

      for(a = 1; n > 1 ; a--)
           a = a*n;

      return a;
  }

int main()
{
int i, n, j;
   printf("Enter the number of rows you wish to see in pascal triangle\n");
   scanf("%d",&n);
   //Make iteration i for n times to print rows//
for (i = 0; i <= n; i++)
   {
      //inner iteration for J to (N - 1)//
      for (j= 0; j <= (n - i); j++)
         printf(" ");
      // inner iteration for J to I//
            for (j = 0 ; j <= i; j++)
              printf("%ld ",factorial(i)/(factorial(j)*factorial(i-j)));

//Print NEWLINE character after each inner iteration//
      printf("\n");
   }
 
   return 0;

}
  
