#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int *p_a = &a;
    int *p_b = &b;

    int temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}