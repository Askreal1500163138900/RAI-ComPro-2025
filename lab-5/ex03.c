#include<stdio.h>

int main(){
    int score[5];
    int total = 0;
    int max = 0;
    for (int i = 0 ; i < 5 ; i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&score[i]);
        total += score[i];
        if (score[i] > max){
            max = score[i];
        }
    }
    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d" , max);
    return 0;
}