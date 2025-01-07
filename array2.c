#include<stdio.h>
int main(){
    int myNumbers[]={1,2,3,4,55,6,22,5};
    int size= sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (int i=0; i<size; i++){
        printf("%d\n",myNumbers[i]);
    } 
    return 0;
}