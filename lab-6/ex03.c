#include <stdio.h>
#include <math.h>  

int main(){
    struct point
    {
        float x;
        float y;
    }coordinate[2];
    
    for (int i = 0 ; i < 2 ; i++){
        printf("Enter x%d: ",i+1);
        scanf("%f" , &coordinate[i].x);
        printf("Enter y%d: ",i+1);
        scanf("%f" , &coordinate[i].y);
    }
    float dx = coordinate[1].x - coordinate[0].x;
    float dy = coordinate[1].y - coordinate[0].y;
    float dis = sqrt(dx * dx + dy * dy);

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)",coordinate[0].x,coordinate[0].y,coordinate[1].x,coordinate[1].y,dis);

    return 0;
}