#include<stdio.h>
   int main(){
  //initialise all the variabels
 	int i;
   //set and iteration for the positive numbers to be find//
         for(i = 1000; i <= 3000; i+= 2) {
			if( i % 2 == 0 ) {
				printf("%d ,", i);
			}
		}
  }
