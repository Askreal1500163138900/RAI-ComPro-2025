#include <stdio.h>
#include <math.h>

float area(float a ,float b, float c){
    float s = (a+b+c) / 2;
    float ans = sqrt(s*(s-a)*(s-b)*(s-c));
    return ans;
}

int main(){
    float a;
    float b;
    float c;
    printf("Enter a : ");
    scanf("%f" , &a);
    printf("Enter b : ");
    scanf("%f" , &b);
    printf("Enter c : ");
    scanf("%f" , &c);
    printf("Your rectanagle's area is %.2f" , area(a,b,c));
    return 0;
}