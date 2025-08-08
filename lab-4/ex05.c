#include <stdio.h>

int main(){
    int num = 0;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d" , &num);
    
    for(int i = 1; i <= num ; i++){
        factorial *= i;
    }
    printf("Factorial of 5 is %d" , factorial);
}