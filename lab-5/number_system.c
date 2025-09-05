#include <stdio.h>
int main(){
    
    int a = 7 , b = 5 , c = 3 , d = 6;
    // int A = ++b + d--%2 *(++c * 4 - 1) /2;
    int B = d--%2;
    printf("%d" , B);
    B = d--%2;
    printf("%d" , B);
    B = d--%2;
    // printf("%d\n" , A);
    printf("%d" , B);
    return 0;
}