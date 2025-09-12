#include <stdio.h>

int main() {
	int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    for (int i = 0 ; i < 6 ; i++){
        printf("%d\n" , *(array + i));      
    }
}