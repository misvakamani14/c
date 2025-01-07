#include<stdio.h>
int main(){
    int array[3][2] = {{1,2}, {3,4},{5,6}};
    // array[2][0]=15;
    int i,j;
    for(i=0 ; i<3 ; i++){
        for(j=0; j<2 ;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    int arr[2][2]= {{12,11},{34,45}};
    int a,b;
    for(a=0 ; a<2 ; a++){
        for(b=0 ; b<2 ; b++){
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    } 
    return 0;
}

// output
// 1 2
// 3 4
// 5 6