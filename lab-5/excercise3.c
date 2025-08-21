#include <stdio.h>

int main(){
    int A[3][3] = {{1,0,-1} , {-1,2,3} ,{2,4,5} };
    int total = 0;
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
        total = 0;
            for (int z = 0 ; z  < 3 ; z++){
                // printf("[%d][%d] x [%d][%d] \n" , i , z , z , j);
                int a = A[i][z] * A[z][j];
                // printf("%d " ,a);
                total += a;
            }
            // printf("\n");
            printf("%d " , total);
        }
        printf("\n");
    }
    return 0;
}