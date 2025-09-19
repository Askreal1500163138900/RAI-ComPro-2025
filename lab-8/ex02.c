#include <stdio.h>

int prime(int num){
    for (int i = 2 ; i < num ; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int start , end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d" ,&start , &end);
    printf("The prime numbers within the intervals are:\n");
    for (int i = start ; i <= end ; i++){
        if (prime(i) == 1){
            printf("%d " , i);
        }
    }
    return 0;
}