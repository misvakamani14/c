#include<stdio.h>
int main(){
//countdown
    printf("countdown\n");
    
    for(int i=5;i>=1;i--){
        printf("%d\n",i);
    }
    printf("thank you");

//odd even
    printf("odd even\n");
    for(int i=1;i<=10;i++){
        if(i%2==0){
            printf("%d =even\n",i);
        }
        else{
            printf("%d =odd\n",i);
        }
    }

//table
    int t=2;
    printf("2 table\n");
    printf("multiplication of table%d\n",t);
    for(int j=1; j<=10; j++){
        printf("%d * %d =%d\n",t,j,t*j);
    }


//sum
int n,sum=0;
   printf("enter number:");
   scanf("%d",&n);

    
   while(n>=1){
    sum=sum+n;//sum+=n;
    n--;
   }
   printf("%d",sum);

//reversed
   int num, reversed = 0, remainder;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;         // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        
        num /= 10;                   // Remove the last digit
    }

    printf("Reversed number: %d\n", reversed);


    return 0;
}