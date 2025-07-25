#include <stdio.h>


int main(){

    int salary = 6500;
    
    scanf("%d", &salary);
    scanf("%d", &salary);
    
    float week = salary / 4;
    float day  = week / 7;
    
    printf("%-15s : %8d\n","salary",salary);
    printf("%-15s : %8.2f\n","Money/Week",week);
    printf("%-15s : %8.3f\n","Money?Day",day);
    printf("%d" , &salary);
    return 0;
}