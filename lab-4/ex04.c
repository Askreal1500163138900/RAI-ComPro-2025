#include <stdio.h>

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d" , &num);

    for (int i = 1 ; i <= 12 ; i++){
        printf("%d x %d = %d\n" , num , i , num*i);
    }
}