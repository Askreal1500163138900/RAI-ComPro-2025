#include <stdio.h>
#include <math.h>

float area(float r){
    float area = 3.14*r*r;
    return area;
}

float confer(float r){
    float confer = 2*3.14*r;
    return confer;
}

int main(){
    float r;
    printf("Enter the radius in cm: ");
    scanf("%f" , &r);
    printf("Circumference: %.2f \nArea: %.2f" , confer(r) , area(r));
    return 0;
}