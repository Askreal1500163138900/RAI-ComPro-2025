#include <stdio.h>
int main(){
    int total = 0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number: ");
        scanf("%d" , &num);
        total += num;
    }
    int avg = total / 10.0;
    printf("Total sum is %d \nAverange is %.2f" , total , avg);
}