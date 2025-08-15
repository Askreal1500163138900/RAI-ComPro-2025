#include <stdio.h>

int main(){
    int nums[10];
    // Get input
    for (int i = 0 ; i < 10 ; i++){
        printf("Enter the value %d here: ",i+1);
        scanf("%d",&nums[i]);
    }
    // Display arrays
    printf("Values in array are: ");
    for (int i = 0 ; i < 10 ; i++){
        printf("%d " , nums[i]);
    }
    return 0;
}