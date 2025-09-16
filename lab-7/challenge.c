#include <stdio.h>

int main(){
    int num[5];
    int *ptr = num;

    // Get input
    printf("Enter 5 integers: ");
    for (int i = 0 ; i < 5 ; i++){
        scanf("%d" , ptr + i);
    }
    // bubble sort
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5-i-1 ; j++){
            if (*(ptr + j) > *(ptr + j + 1)){
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Display array
    printf("Sorted : ");
    for (int i = 0 ; i < 5 ; i++){
        printf("%d " , *(num + i));
    }
    return 0;
}