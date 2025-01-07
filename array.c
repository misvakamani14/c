#include<stdio.h>
int main(){
    int num[]={1,5,8,3,4};
    printf("%d\n",num[1]);

    char symbol[]={'a','b','c','d'};
    symbol[1]='*';
    for(int j=0;j<4;j++){
        printf("%c\n",symbol[j]);
    }

    int no[]={1,6,10,5,3};
    int i;
    for(i=0; i<5; i++){
        printf("%d\n",no[i]);
    }

    return 0;

}