#include<stdio.h>
int main(){
    int cust;
    int bank = 2;
    int credit;
    int exit;
    printf("enetr your select option:");
    scanf("%d",&cust);
    printf("enetr your select option:");
    scanf("%d",&bank);
   
     

    switch(cust){
        case 1:
        // printf("bank statement");
        // break;
        switch(bank){
            case 1:
            printf("1 month check balance");
            break;

            case 2:
            printf("6 month check balance");
            break;

            case 3:
            printf("select month check balance");
            break;

            default:
            printf("invalid month");
            break;
        }
        break;
        
 printf("enetr your select option:");
    scanf("%d",&credit);
        case 2:
        switch(credit){
            case 1:
            printf("1 month");
            break;

            case 2:
            printf("6 month");
            break;

            case 3:
            printf("select month");
            break;

            default:
            printf("invalid month:");
            break;
        }
        break;

printf("enetr your select option:");
    scanf("%d",&exit);
        case 3:
        printf("exit");
        break;
    }
    return 0;
}