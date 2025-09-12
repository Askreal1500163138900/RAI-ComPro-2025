#include <stdio.h>

int main() {
    int array[] = { -2, 1, 2, 40, -5, 6 };
    int *ptr = array;
    
    int max = 0;
    int *ptr_max = &max;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]) ; i++)
    {
        if(max < *(array + i)){
            *ptr_max += *(array + i); 
        }
    }
    printf("Sum value: %d" , max);
    return 0;
}