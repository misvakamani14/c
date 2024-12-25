#include<stdio.h>
int main(){
//if
    int a=10, b=20;
    if(a<b){
        printf("a is less than b\n");
    }

//if-else
    int x=100, y=20;
    if(a<b){
        printf("b is biggest\n");
    }
    else{
        printf("b is biggest\n");
    }

//if else-if else
    int c;
    printf("enter your age=");
    scanf("%d",&c);
    if(c>18){
        printf("you are aligible for voting");
    }
    else if(c==18){
        printf("this year you are start voting");
    }
    else{
        printf("not able");
    }


    return 0;

}