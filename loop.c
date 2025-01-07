#include<stdio.h>
int main(){
//while
    printf("while increment\n");
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }

//do while
    printf("do while increment\n");
    int a=1;
    do{
        printf("%d\n",a);
        a++;
    }
    while(a<=10);

//decrement
    printf("while decrement\n");
    int h=10;
    while(h>=1){
        printf("%d\n",h);
        h--;
    }

    printf("do while decrement\n");
    int b=10;
    do{
        printf("%d\n",b);
        b--;
    }
    while(b>=1);
    return 0;
}