#include <stdio.h>

int main(){
    int element;
    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d",&element);
    int nums[element];
    int counted[element];

    printf("Enter %d integers: ",element);
    for (int i = 0 ; i < element ; i++){
        scanf("%d" , &nums[i]);
        counted[i] = 0;
    }


    printf("\nOutput:\n");
    for (int i = 0; i < element; i++) {
        int count = 0;
        if (counted[i]){
            continue;
        }
        for (int j = i+1 ; j < element; j++) {
            if (nums[i] == nums[j]) {
                count++;
                counted[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", nums[i], count);
    }
    return 0;
}