# include<stdio.h>
int main(){
    // int i,j;//1-row 2-col
    // for(i=1;i<=3;i++){
    //     for(j=1;j<=i;j++){
    //         printf("* ");
            
    //     }
    //     printf("\n");
    // }


/* 1
   2 3 
   4 5 6 */

//    int a,b,num=1;  //num 1 is starting number
//    for(a=1;a<=3;a++){ // loop for 3 rows
//     for(b=1;b<=a;b++){
//         printf("%d ",num++);
//     }
//     printf("\n");
//    }


/*6
  5 4
  3 2 1*/

//    int x,y,no=6;      //no 6 is starting no.
//    for(x=6 ; x>3 ; x--){ // loop for 3 rows
//     for(y=6; y>=x; y--){
//         printf("%d ",no--);
//     }
//     printf("\n");
//    }




// * * *
//  * *
//   *
//    int o,p;
//    for(o=3 ; o>=1 ; o--){
//     for(p=3 ; p>=1 ; p--){
//         if(p>o){
//             printf(" ");
//         }
//         else{
//             printf(" *");
//         }
//     }
//     printf("\n");
//    }


// * * *
//   * * 
//     *
int r,t,rows=3;
printf("if\n");
    //first loop for printing all rows
   for(r=0 ; r<rows ; r++){
    for(t=0 ; t<rows+r ; t++){
        if(t<2*r){ // space mate condition >t
            printf(" ");
        }
        else{
            printf("* ");
        }
    }
    printf("\n");
   }


    

// * * *
// * *
// *
    // printf("for\n");
    // int f,g;
    // for(f=3 ; f>=1 ; f--){
    //     for(g=1 ; g<=f ; g++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


/* 1 2 3
    2 3
     3*/
    //   int m,n,k;
    //    for(m=1 ; m<=3 ; m++){
    //     for(n=1; n<m; n++){
    //         printf(" ");
    //     }
    //         for(k=m; k<=3 ;k++){
    //             printf("%d ",k);
            
    //     }
    //     printf("\n");
    //    }


       /* 1 2 3
            2 3
              3*/

    //    int m,n,k;
    //    for(m=1 ; m<=3 ; m++){
    //     for(n=1; n<m; n++){
    //         printf("  ");
    //     }
    //     for(n=m; n<=3 ;n++){
    //         printf("%d ",n);
    //     }
    //     printf("\n");
    //    }
    return 0;
}