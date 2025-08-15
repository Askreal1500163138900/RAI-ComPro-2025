#include<stdio.h>

int main(){
    int nums[8];
    int min = 0;
    int max = 0;
    for (int i = 0 ; i < 8 ; i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&nums[i]);
    }
    min , max = nums[0];
    for (int i = 0 ; i < 8 ; i++){
        if (nums[i] > max){
            max = nums[i];
        }
        if (nums[i] < min){
            min = nums[i];
        }
    }
    
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d" , max);
    return 0;
}   