# include<stdio.h>
int main(){
    int day,date;
    printf("enter day:");
    scanf("%d",&day);
    printf("enter date:");
    scanf("%d",&date);

    switch(day){
        case 1 :
        switch (date){
            case 1 :
            printf("31");
            break;

            case 2 :
            printf("1");
            break;

            default:
            printf("invalid date");
            break;
        }
        break;

        case 2 :
        printf("no data");
        break;

        default:
        printf("Invalid day");
        break;
    }




    return 0;
}