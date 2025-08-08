#include <stdio.h>

int main(){
    char name[50];
    int compo, phy, cal;
    float avg;
    
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculas score: ");
    scanf("%d", &cal);
    printf("Enter your Physics score: ");
    scanf("%d", &phy);
    printf("Enter your Science score: ");
    scanf("%d", &compo);

    avg = (phy + compo + cal) / 3;
    
    printf("\nSubject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");


    // Find cal grade 
    if (cal >= 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "Cal", cal, 'A', 4.0);
    }
    else if (cal >= 70 && cal < 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "Cal", cal, 'B', 3.0);
    }
    else if (cal >= 60 && cal < 70){
        printf("%-12s %-9d %-9c %-12.1f\n", "Cal", cal, 'C', 2.0);
    }
    else if (cal >= 50 && cal < 60){
        printf("%-12s %-9d %-9c %-12.1f\n", "Cal", cal, 'D', 1.0);
    }
    else{
       printf("%-12s %-9d %-9c %-12.1f\n", "Cal", cal, 'F', 0.0);
    }

    // Find phy grade 
    if (phy >= 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "Physics", phy, 'A', 4.0);
    }
    else if (phy >= 70 && phy < 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "Physics", phy, 'B', 3.0);
    }
    else if (phy >= 60 && phy < 70){
        printf("%-12s %-9d %-9c %-12.1f\n", "Physics", phy, 'C', 2.0);
    }
    else if (phy >= 50 && phy < 60){
        printf("%-12s %-9d %-9c %-12.1f\n", "Physics", phy, 'D', 1.0);
    }
    else{
       printf("%-12s %-9d %-9c %-12.1f\n", "Physics", phy, 'F', 0.0);
    }

        // Find compo grade 
    if (compo >= 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "compro", compo, 'A', 4.0);
    }
    else if (compo >= 70 && compo < 80)
    {
        printf("%-12s %-9d %-9c %-12.1f\n", "compro", compo, 'B', 3.0);
    }
    else if (compo >= 60 && compo < 70){
        printf("%-12s %-9d %-9c %-12.1f\n", "compro", compo, 'C', 2.0);
    }
    else if (compo >= 50 && compo < 60){
        printf("%-12s %-9d %-9c %-12.1f\n", "compro", compo, 'D', 1.0);
    }
    else{
       printf("%-12s %-9d %-9c %-12.1f\n", "compro", compo, 'F', 0.0);
    }

    printf("\n");
    // Find avg grade 
    if (avg >= 80)
    {
        printf("GPA 4.0");
    }
    else if (avg >= 70 && avg < 80)
    {
        printf("GPA 3.0");
    }
    else if (avg >= 60 && avg < 70){
        printf("GPA 2.0");
    }
    else if (avg >= 50 && avg < 60){
        printf("GPA 1.0");
    }
    else{
       printf("GPA 0.0");
    }
}