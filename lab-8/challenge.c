#include <stdio.h>

struct student
{
    char name[20];
    int grade;
};

float avg (int n , struct student std[n]){
    int sum = 0;
    for (int i = 0 ; i < n ; i++){
        sum += std[i].grade;
    }
    float avg = sum / n;
    return avg;
}

float hightest(int n , struct student std[n]){
    int max = std[0].grade;
    for (int i = 0 ; i < n ; i++){
        if (max < std[i].grade){
            max = std[i].grade;
        }
    }
    return max;
}

float lowest(int n , struct student std[n]){
    int min = std[0].grade;
    for (int i = 0 ; i < n ; i++){
        if (min > std[i].grade){
            min = std[i].grade;
        }
    }
    return min;
}

void checkpass(int n , struct student std[n]){
    printf("Students who passed:\n");
    for (int i = 0 ; i < n ; i++){
        if (std[i].grade >= 60){
            printf("%s\n" , std[i].name);
        }
    }
    
}

int main(){
    int st_n;
    printf("Enter number of students: ");
    scanf("%d" , &st_n);
    
    struct student std[st_n];

    // Get input
    for (int i = 0 ; i < st_n ; i++){
        char name[35];
        int grade;
        printf("\n");
        printf("Enter name of student %d: ",i+1);
        scanf("%s" , std[i].name);

        printf("Enter grade of %s: " , std[i].name);
        scanf("%d" , &std[i].grade);
        printf("\n");
    }

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n" , avg(st_n , std));
    printf("Hightest grade: %.2f\n" , hightest(st_n , std));
    printf("Lowest grade: %.2f\n" , lowest(st_n , std));

    printf("\n");

    checkpass(st_n , std);
    
    return 0;
}