

#include <stdio.h>
 
long num(int);
 
int main()
{
   int i, n, j;
 
   printf("Enter the number of rows\n");
   scanf("%d",&n);
 
   for (i = 0; i < n; i++)
   {
      for (j = 0; j <= (n - i - 2); j++)
         printf(" ");
 
      for (j = 0 ; j <= i; j++)
         printf("%ld ",num(i)/(num(j)*num(i-j)));
 
      printf("\n");
   }
 
   return 0;
}
 

