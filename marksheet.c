#include<stdio.h>
int main(){
    int a;

    printf("enter your marks=\n");
    scanf("%d",&a);

    if(a<35){
        printf("fail,better luck next time\n");
    }

    else if(a==35<50){
        printf("you are pass\n");
        printf("you have D grade\n");
    }

    else if(a==50<70){
        printf("you are pass\n");
        printf("you have C grade\n");
    }

    else if(a==70<90){
        printf("you are pass\n");
        printf("you have B grade\n");
    }

    else{
        printf("congrats\n");
        printf("you are pass\n");
        printf("you have A grade");
    }


    return 0;
}