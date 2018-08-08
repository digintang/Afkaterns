
  //C program to print Pascal triangle//
#include <stdio.h>
 
     int num(int n){
        int a;

           for(a = 1; n > 1 ; a--)
             a = a*n;

     return a;
  }
      int ncr(int n,int r) {
     return num(n) / ( num(n-r) * num(r) );
 }
     int main()
   {
    int i, n, j;
        printf("Enter the number of rows\n");
        scanf("%d",&n);
 //Make iteration i for n times to print rows//
         for (i = 0; i <= n; i++)
       {
 //inner iteration for J to (N - 1)// 
           for (j = 0; j <= n-i; j++)
             printf(" "); 
 // inner iteration for J to I//
                                                          
               for (j = 0 ; j <= i; j++)
                   printf(" %3d", ncr(i, j));
 //Print NEWLINE character after each inner iteration//
 
      printf("\n");
   }
 
   return 0;
}
 

