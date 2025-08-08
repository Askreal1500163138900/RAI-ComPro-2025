#include <stdio.h>

int main(){
    int i = 0;
    int total = 0;
    int num;
    while (i < 10)
    {
        printf("Enter the number: ");
        scanf("%d" , &num);
        total += num;
        i++;
    }
    printf("Total sum is %d",total);
    
}