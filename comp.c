#include<stdio.h>

int main(){
    int a = 10;
    int b = 2;
    int c = 5;

    printf("a is less than b %d\n", a < b && a < c );
    printf("a is less than b %d\n", a < b);
    printf("a is equal to b %d\n", a == b);
    printf("a is not equal to b %d\n", a != b);

    int x,y;
    printf("enter first value:");
    scanf("%d",&x);
    printf("enter second value:");
    scanf("%d",&y);
    printf("x is equal to y %d \n",x==y);
    printf("x is not equal to y %d \n",x!=y);
    printf("x is less than y %d \n",x<y);
    printf("x is less than y %d \n",x>y);


    return 0;
}