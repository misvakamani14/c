#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);

    switch(num){
        case 1:
        printf("hindi");
        break;

        case 2:
        printf("english");
        break;

        default :
        printf("invalid number");
    }
    return 0;
}