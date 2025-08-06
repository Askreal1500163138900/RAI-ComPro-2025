#include <stdio.h>

int main(){
    char name[50];
    char grade;
    int sci, phy, cal;
    float avg;
    
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculas score: ");
    scanf("%d", &cal);
    printf("Enter your Physics score: ");
    scanf("%d", &phy);
    printf("Enter your Science score: ");
    scanf("%d", &sci);
    
    avg = (phy + sci + cal) / 3;
    
    if (avg >= 80)
    {
        printf("%s, your average is %.2f. You got grade A.",name,avg);
    }
    else if (avg >= 70 && avg < 80)
    {
        printf("%s, your average is %.2f. You got grade B.",name,avg);
    }
    else if (avg >= 60 && avg < 70){
        printf("%s, your average is %.2f. You got grade C.",name,avg);
    }
    else if (avg >= 50 && avg < 60){
        printf("%s, your average is %.2f. You got grade D.",name,avg);
    }
    else{
        printf("%s, your average is %.2f. You got grade F.",name,avg);
    }
    
}