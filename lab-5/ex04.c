#include <stdio.h>
int main(){
    int nums[10];
    int even = 0;
    int odd = 0;
    // Get input
    for (int i = 0 ; i < 10 ; i++){
        printf("Enter value %d : ",i+1);
        scanf("%d",&nums[i]);
        if (nums[i] % 2 == 0){
            even +=1;
        } else {
            odd += 1;
        }
    }
    printf("Even number %d\n" , even);
    printf("Odd number %d\n" , odd);

    return 0;
}