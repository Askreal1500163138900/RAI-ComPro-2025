#include <stdio.h>

int checknum(int n){
    if (n % 2 == 0){
        return 1; // even
    }
    else{
        return 0; // odd
    }
}

int main(){
    int n;
    int odd = 0;
    int even = 0;
    printf("N : ");
    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i++){
        int num;
        printf("INPUT: ");
        scanf("%d" , &num);
       if(checknum(num) == 1){
            even += 1;
       }
        else {
            odd += 1;
        }
    }
    printf("Sum of even number: %d\nSum of odd number: %d" , even , odd);
    return 0;
}