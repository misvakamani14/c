#include<stdio.h>
int main(){
    int a;
    printf("enter number=");
    scanf("%d",&a);//even=2,4..
    if(a%2){
        printf("number is odd\n");
    }
    else{
        printf("number is even\n");
    }

    int x;
    printf("enter valid number=");
    scanf("%d",&x);
    if(x>0){
        printf("your number is positive");
    }
    else if(x<0){
        printf("your number is negative");
    }
    else{
        printf("your number is zero");
    }
    return 0;
}