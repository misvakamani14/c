#include<stdio.h>
int main(){
//working age limit
    int y;
    printf("enter your age:");
    scanf("%d",&y);

    if(y<18){
        printf("permission not granted for work\n");
    }

    else if(y=18<65 && y<=65){
        printf("allow work permission\n");
    }

    else{
        printf("permission not granted for work\n");
    }


//1 to 10 check user input
    int x;
    printf("enter valid number:");
    scanf("%d",&x);
    if(x>=1 && x<=10){
        printf("valid number\n");
    }
    else{
        printf("not valid\n");
    }


//divide by 3
    int w;
    printf("enter number:");
    scanf("%d",&w);
    
    if(w%3==0){
        printf("divide by 3\n");
    }
    else{
        printf("not divide by 3\n");
    }


//user input maximum,minimum value
    int a,b,c;
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);
    //maximum
    if(a>b && a>c){
        printf("a is maximum\n");
    }
    else if (b>c && b>a){
        printf("b is maximum\n");
    }
    else{
        printf("c is maximum\n");
    }

    //minimum
    if(a<b && a<c){
        printf("a is minimum\n");
    }
    else if(b<c && b<a){
        printf("b is mnimum\n");
    }
    else{
        printf("c is minimum\n");
    }
    
    
    return 0;
}