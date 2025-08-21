#include <stdio.h>

int main(){
    int A[3][3] = {{1,0,-1} , {-1,2,3} ,{2,4,5} };
    printf("Diagonal matrix of A = \n");
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            if (i == j){
                printf("%d " , A[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return  0;
}