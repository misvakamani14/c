#include<stdio.h>
int main(){


/*  3 3 3
      2 2
        1*/

int n = 3; // Number of rows

    for (int i = n; i >= 1; i--) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d   ", i);
        }
        
        printf("\n");
    }


    /*     1
    2    3
  4    5   6  */

    int n = 3; // Number of rows
    int num = 1; // Starting number
    
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d   ", num++);
        }
        
        printf("\n");
    }

   //   *
//    *   * 
//  *   *    *


int m,n;
 for(m=1 ; m<=3 ; m++){
    for(n=1 ; n<=3-m ; n++){
        printf(" ");
    }
    for(n=1 ; n<=m ; n++){
        printf("*  ");
    }
    printf("\n");
 }


 

 /*      1
       2   2
     3   3   3*/


int n = 3; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d   ", i);
        }
        
        printf("\n");
    }


   

       return 0;
}