# include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            printf("* ");
        }
        printf("\n");
    }


    int r,c;
    for(r=1; r<=3;r++){
        for(c=1;c<=2;c++){
            printf("A ");
        }
        printf("\n");
    }


    int num,n;
    for(num=1;num<=3;num++){
        for(n=1;n<=3;n++){
            printf("%d ",n);
            
        }
        printf("\n");
    }

    int a,b;
    for(a=1;a<=3;a++){

        for(b=1;b<=3;b++){
            printf("%d ",a);
            
        }
        printf("\n");
    }
    return 0;
}