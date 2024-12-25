#include<stdio.h>
int main(){
    int n,a,b,c;
    
    printf("print value:");
    scanf("%d",&n);
    n+=2;
    printf("the new value is : %d\n",n );

    printf("print value:");
    scanf("%d",&a);
    a-=2;
    printf("the new value is :%d\n",a );

    printf("print value:");
    scanf("%d",&b);
    b*=3;
    printf("the new value is :%d\n",b );

    printf("print value:");
    scanf("%d",&c);
    c/=9;
    printf("the new value is :%d\n",c );

    return 0;
}