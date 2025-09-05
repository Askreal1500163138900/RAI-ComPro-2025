#include <stdio.h>
#include <math.h>  

int main(){
    struct vector
    {
        float u_x;
        float u_y;
    }v[2];
    for (int i = 0 ; i < 2 ; i++){
        printf("u_x: ");
        scanf("%f" , &v[i].u_x);
        printf("u_y: ");
        scanf("%f" , &v[i].u_y);
    }
    printf("Resultant vector is equvalence to %.1fi + %.1fj" , v[0].u_x + v[1].u_x , v[0].u_y + v[1].u_y);
    return 0;
}