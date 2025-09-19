#include <stdio.h>
#include <math.h>

int squrt(int a , int b){
    int ans = (a*a) + (b*b);
    return ans;
}

int main(){
    int num1 , num2;
    printf("Enter the two integers: ");
    scanf("%d %d" , &num1 , &num2);
    printf("Sum of squares of %d and %d is %d" , num1 , num2 , squrt(num1 , num2));
    return 0;
}