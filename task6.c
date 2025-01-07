#include<stdio.h>
int main(){
    // + - * /
    int num , no, result;
    
    printf("enter number :");
    scanf("%d",&num);

    printf("enter number :");
    scanf("%d",&no);

    char ope;
    // getchar();
    printf("enter symbol:");
    scanf(" %c",&ope);


    
    switch(ope){
        case '+':
        result = num+no;
        printf("addition is:%d\n",result);
        break;

        case '-':
        result= num-no;
        printf("substraction is:%d",result);
        break;

        case '*':
        result=num*no;
        printf("multiplication is%d",result);
        break;

        case '/':
        if(no==0){
            printf("dividon not allowed ");
        }
        else{
            result = num/no;
            printf("divison is: %d",result);
        }
        
        break;

        default:
        printf("in valid");
        
    }
    
    
    return 0;
}