#include <stdio.h>

int main() {
    int i = 0;
    while(i<=10){
        i++;
        if(i == 3){
            printf("This is 3\n");
            continue;
        }
        printf("%d\n", i);
    }
    
    printf("for loop\n");
    int j;
    for(j=1 ; j<=10; j++){
        if(j==5){
            break;
        }
        printf("%d\n",j);
    }

    return 0;
}

